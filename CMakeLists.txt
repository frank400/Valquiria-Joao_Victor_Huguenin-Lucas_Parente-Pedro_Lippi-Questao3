cmake_minimum_required(VERSION 3.17)
project(Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao3 C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao3
        src/ganhaColuna.c
        src/ganharDiagonal1.c
        src/ganharDiagonal2.c
        src/ganharLinhas.c
        src/main.c
        src/operacoes_jogo.h)
