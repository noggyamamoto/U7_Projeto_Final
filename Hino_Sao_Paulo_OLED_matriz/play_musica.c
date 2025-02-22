#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "notas.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "pico/binary_info.h"
#include "hardware/i2c.h"


// Definição dos pinos
 const uint BUZZER = PINO_BUZZER; // Pino do buzzer definido no notas.h
const uint PINO_BOTAO = 6; // Pino do botão B
const uint I2C_SDA = 14; // Pino SDA
const uint I2C_SCL = 15; // Pino SCL

// Configurações PWM
const float DIVISOR_CLK_PWM = 16.0;
const uint16_t PERIOD = 2000;
const uint16_t MAX_WRAP_DIV_BUZZER = 16;
const uint16_t MIN_WRAP_DIV_BUZZER = 1;

// Função para tocar uma nota usando PWM
void tocar_nota(uint pino_buzzer, int frequencia, int duracao) {
    if (frequencia == 0) {
        sleep_ms(duracao); // Pausa entre as notas
        return;
    }

    uint num_slice = pwm_gpio_to_slice_num(pino_buzzer);
    pwm_set_wrap(num_slice, (uint16_t)(125000000 / frequencia)); 
    pwm_set_gpio_level(pino_buzzer, (uint16_t)(125000000 / (2 * frequencia))); 

    pwm_set_enabled(num_slice, true);
    sleep_ms(duracao * 60); 

    pwm_set_enabled(num_slice, false);
    sleep_ms(50);
}

// Função para aguardar o botão ser pressionado
void esperar_botao() {
    while (gpio_get(PINO_BOTAO) == 1) { 
        sleep_ms(10); 
    }

    // Aguarda a liberação do botão para evitar múltiplas detecções
    sleep_ms(50);
    while (gpio_get(PINO_BOTAO) == 0) { 
        sleep_ms(10); 
    }
}
int main() {
    stdio_init_all();

    // Configurar o pino do buzzer para PWM
    gpio_set_function(BUZZER, GPIO_FUNC_PWM);
    uint num_slice = pwm_gpio_to_slice_num(BUZZER);
    pwm_set_enabled(num_slice, false);
    
    // Configurar o botão como entrada com pull-up
    gpio_init(PINO_BOTAO);
    gpio_set_dir(PINO_BOTAO, GPIO_IN);
    gpio_pull_up(PINO_BOTAO);

    // Laço principal
    while (true) {
        printf("Pressione o botão B para tocar a música...\n");
        esperar_botao(); // Aguarda o botão ser pressionado e solto

        printf("Tocando o Hino...\n");
        for (size_t i = 0; i < TAMANHO_MELODIA; i++) {
            tocar_nota(PINO_BUZZER, melodia[i], duracoes[i]);
        }
        sleep_ms(3000);  // Pausa antes de permitir nova execução
    }

    return 0;
}
