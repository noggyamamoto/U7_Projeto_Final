#include "pico/stdlib.h"
#include "hardware/pwm.h"

// Definição das notas musicais
#define NOTE_Eb4 2489   
#define NOTE_F4  2792   
#define NOTE_Gb4 2960 
#define NOTE_G4  3136
#define NOTE_Ab4 3322
#define NOTE_A4  3520
#define NOTE_Bb4 3725
#define NOTE_C5  4186
#define NOTE_Db5 4435
#define NOTE_D5  4698
#define NOTE_Eb5 4979

#define TAMANHO_MELODIA 76  // Número total de notas

// Pino do buzzer
#define PINO_BUZZER 21

// Notas da melodia
int melodia[] = {
    NOTE_Ab4, NOTE_Bb4, NOTE_C5, NOTE_Bb4, NOTE_Ab4, NOTE_F4, NOTE_Eb4, NOTE_Eb4,
    NOTE_Eb4, NOTE_Ab4, NOTE_Ab4, NOTE_Bb4, NOTE_Bb4, NOTE_F4, NOTE_F4, NOTE_Ab4, NOTE_G4,
    NOTE_G4, NOTE_Ab4, NOTE_Bb4, NOTE_Ab4, NOTE_F4, NOTE_Ab4, NOTE_G4, NOTE_F4,
    NOTE_Ab4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_Bb4, NOTE_G4, NOTE_F4, NOTE_Eb4,  

    NOTE_Eb4, NOTE_F4, NOTE_Gb4, NOTE_F4, NOTE_A4, NOTE_Db5, NOTE_C5, NOTE_Bb4, 
    NOTE_Db5, NOTE_C5, NOTE_Bb4, NOTE_Bb4, NOTE_C5, NOTE_D5, NOTE_Bb4, NOTE_Eb5, NOTE_Eb5,

    NOTE_Eb5, NOTE_Db5, NOTE_C5, NOTE_Bb4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_Eb4, NOTE_Eb4,
    NOTE_C5, NOTE_Db5, NOTE_C5, NOTE_Bb4, NOTE_Eb5, 
    NOTE_Bb4, NOTE_Eb5, NOTE_Bb4, NOTE_Eb5, NOTE_Eb5, 
    NOTE_Bb4, NOTE_Eb5, NOTE_Bb4, NOTE_Ab4, NOTE_Ab4 
};

// Duração de cada nota (quanto maior o valor, mais curta a duração)
int duracoes[] = {
    8, 4, 4, 4, 4, 4, 12, 12,
    4, 8, 4, 4, 4, 4, 4, 12, 12,
    8, 4, 4, 4, 4, 4, 12, 8,
    4, 4, 8, 8, 4, 4, 4, 12, 12, 

    8, 4, 4, 4, 4, 4, 12, 8,
    4, 4, 8, 8, 4, 4, 4, 12, 12,

    6, 6, 6, 16, 3, 3, 4, 4, 12, 12,
    4, 4, 4, 8, 12,
    4, 4, 4, 12, 8,
    4, 4, 4, 12, 8
};
