# Questão 3 da lista de exercio em grupo

- Nome do Grupo: Valquiria
- Integrantes: João Victor Huguenin, Lucas Parente e Pedro Lippi

## Instalação

Para compilar o projeto há duas opções:

1. Compilação pelo gcc/MinGW: abra o seu prompt de comando e execute o seguinte comando 
  ```
  gcc -std=c99 src/main.c src/ganhaColuna.c src/ganharDiagonal1.c src/ganharDiagonal2.c src/ganharLinhas.c -o Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao3
  ```
2. Utilizando o Cmake: execute a seguinte sequencia de comandos na root do projeto
  - cmake .
  - make .
  - ./Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao3

## Objetivos da questão

A questão tem duas requisições:
- Fazer um jogo da velha tradicional de 3X3.
- Implementar um jogo da velha com dimenções 5X5.

Ambos objetivos são alcançados trocando o valor da constante DIM no arquivo de header operacoes_jogo.h para o valor requerido, seja 3 para um tabuleiro de 3X3 ou 5 para um tabuleiro de 5X5, podendo até mesmo ser alterado para valores impares maiores.

