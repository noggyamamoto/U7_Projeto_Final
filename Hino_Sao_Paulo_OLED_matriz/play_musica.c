// Bibliotecas
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/clocks.h"
#include <string.h>
#include <stdlib.h>
#include "pico/multicore.h"
#include "hardware/i2c.h"
#include "inc/notas.h"
#include "inc/ssd1306.h"
#include "inc/ssd1306_i2c.h"
#include "inc/SPFC_bitmap.h"

// Definição dos pinos
const uint BUZZER = 21;        // Pino do buzzer
const uint PINO_BOTAO_B = 6;   // Pino do botão B
const uint I2C_SDA = 14;       // Pino SDA
const uint I2C_SCL = 15;       // Pino SCL

// Variável global para sinalizar que o botão B foi pressionado
volatile bool botao_b_pressionado = false;

// Função para tocar uma nota usando PWM
void tocar_nota(uint pino_buzzer, int frequencia, int duracao) {
    if (frequencia == 0) {
        sleep_ms(duracao); // Pausa entre as notas
        return;
    }

    uint num_slice = pwm_gpio_to_slice_num(pino_buzzer);
    uint16_t wrap = (uint16_t)(clock_get_hz(clk_sys) / frequencia); // Obtém a frequência do clock do sistema
    pwm_set_wrap(num_slice, wrap);
    pwm_set_gpio_level(pino_buzzer, wrap / 2); // 50% de duty cycle

    pwm_set_enabled(num_slice, true);
    sleep_ms(duracao * 60);

    pwm_set_enabled(num_slice, false);
    sleep_ms(50);
}

// Função para tocar a música no Core 1
void tocar_musica() {
    for (size_t i = 0; i < TAMANHO_MELODIA; i++) {
        tocar_nota(BUZZER, melodia[i], duracoes[i]);
    }
    sleep_ms(3000); // Pausa após tocar a música
}

// Função para exibir a imagem no display
void exibir_imagem_no_display(ssd1306_t *display) {
    
    // Limpa o display (preenche o buffer com 0s)
    memset(display->ram_buffer + 1, 0, display->bufsize - 1);

    // Exibe a imagem no display
    ssd1306_draw_bitmap(display, spfc_bitmap);

    // Mantém a imagem no display por 5 segundos
    sleep_ms(10000);

    // Limpa o display após 5 segundos (preenche o buffer com 0s)
    memset(display->ram_buffer + 1, 0, display->bufsize - 1);
    ssd1306_send_data(display); // Envia o buffer vazio para o display
}

// Função executada no Core 1
void core1_entry() {
    while (true) {
        // Aguarda uma mensagem do Core 0
        uint32_t msg = multicore_fifo_pop_blocking();

        // Se a mensagem for 1, toca a música
        if (msg == 1) {
            tocar_musica();
        }
    }
}

// Função de interrupção para o botão B
void botao_b_handler(uint gpio, uint32_t events) {
    static absolute_time_t last_time = 0;
    absolute_time_t now = get_absolute_time();
    if (absolute_time_diff_us(last_time, now) > 100000) { // Debounce de 100ms
        if (gpio == PINO_BOTAO_B) {
            botao_b_pressionado = true;
        }
        last_time = now;
    }
}

int main() {
    stdio_init_all();

    // Configurar o pino do buzzer para PWM
    gpio_set_function(BUZZER, GPIO_FUNC_PWM);
    uint num_slice = pwm_gpio_to_slice_num(BUZZER);
    pwm_set_gpio_level(BUZZER, 0); // Configura o nível inicial do PWM
    pwm_set_enabled(num_slice, false); // Desabilita o PWM inicialmente

    // Configurar o botão B como entrada com pull-up
    gpio_init(PINO_BOTAO_B);
    gpio_set_dir(PINO_BOTAO_B, GPIO_IN);
    gpio_pull_up(PINO_BOTAO_B);
    
    // Configurar a interrupção para o botão B
    gpio_set_irq_enabled_with_callback(PINO_BOTAO_B, GPIO_IRQ_EDGE_FALL, true, &botao_b_handler);

    // Inicialização do I2C para o display
    if (!i2c_init(i2c1, 400 * 1000)) {
        printf("Erro ao inicializar I2C\n");
        return -1;
    }
    gpio_set_function(I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(I2C_SDA);
    gpio_pull_up(I2C_SCL);

    // Inicialização do display
    ssd1306_t display;
    ssd1306_init_bm(&display, 128, 64, false, 0x3C, i2c1);
    ssd1306_config(&display);

    // Inicializa o Core 1
    multicore_launch_core1(core1_entry);

    // Laço principal (Core 0)
    while (true) {
        // Verifica se o botão B foi pressionado
        if (botao_b_pressionado) {
            botao_b_pressionado = false; // Reseta a flag

            // Envia uma mensagem para o Core 1 para tocar a música
            multicore_fifo_push_blocking(1);
        
            // Exibe a imagem no display
            exibir_imagem_no_display(&display);

        }

        sleep_ms(10); // Pequena pausa para evitar uso excessivo da CPU
    }

    return 0;
}

