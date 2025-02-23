--> --> --> Chaveiro Inteligente com Reprodução de Áudio e Exibição de Logo

--> --> Este projeto consiste em um chaveiro inteligente que, ao ser acionado por um botão, reproduz o hino do São Paulo e exibe a logo do time em um display OLED. Desenvolvido com um microcontrolador Raspberry Pi Pico W, o sistema combina técnicas de sistemas embarcados, como PWM para reprodução de áudio e comunicação I2C para controle do display.

--> --> --> Funcionalidades:

--> Reprodução de Áudio: O hino do São Paulo é reproduzido através de um buzzer, utilizando PWM para gerar as frequências das notas musicais.

--> Exibição de Logo: A logo do São Paulo é exibida em um display OLED de 128x64 pixels.

--> Multicore: O projeto utiliza os dois núcleos do Raspberry Pi Pico W, permitindo que a música seja tocada no Core 1 enquanto o Core 0 gerencia a exibição da logo e a leitura do botão.

--> Portabilidade: O sistema é alimentado por bateria, tornando-o portátil e ideal para uso como chaveiro.

--> --> --> Componentes Utilizados:

--> Microcontrolador: Raspberry Pi Pico W.

--> Display: OLED 128x64 (comunicação I2C).

--> Buzzer: Para reprodução do áudio.

--> Botão: Para acionar o sistema.

--> Bateria: Para alimentação do circuito.

--> --> --> Como Funciona:

--> Ao pressionar o botão, o sistema detecta o acionamento e inicia a reprodução do hino.

--> Simultaneamente, a logo do São Paulo é exibida no display OLED.

--> O hino é reproduzido utilizando PWM para gerar as frequências das notas.

--> Após a reprodução, o sistema retorna ao estado inicial, aguardando um novo acionamento.

--> --> --> Montagem do Circuito:

--> Buzzer: Conectado ao pino GP21 (saída PWM).

--> Botão: Conectado ao pino GP6 (entrada digital com pull-up).

--> Display OLED: Conectado aos pinos GP14 (SDA) e GP15 (SCL) via I2C.


--> --> --> Vídeo de Demonstração:

--> --> Link para o vídeo no YouTube


--> --> --> Contribuições:

--> --> Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests com melhorias.

--> --> --> Licença:

--> --> Este projeto está licenciado sob a Licença MIT.

--> --> --> Autor:

--> [João Nogueira]

--> [(https://www.linkedin.com/in/jo%C3%A3o-nogueira-5898902b2/)].
