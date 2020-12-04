#include <stdio.h>
#include <stdlib.h>
#include "operacoes_jogo.h"

int coordenadaCerta(int x, int y)
{
    if (x >= 0 && x < DIM)
    {
        if (y >= 0 && y < DIM)
        {
            return 1;
        }
    }
    return 0;
}
int posicaVazia(int x, int y, int mat[DIM][DIM])
{
    if (mat[x][y] != 1 && mat[x][y] != 2)
    {
        return 1;
    }
    else
    {
        printf("\nPosicao Invalida!\nTente novamente!\n");
        return 0;
    }
}
void imprimir(int mat[DIM][DIM])
{
    printf("\nTabuleiro:\n");
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}




int main()
{
    int mat[DIM][DIM];
    printf("Jogo da Velha");

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            mat[i][j] = 0;
        }
    }
    printf("\n");

    int x, y, CV = 0, jogos = 0, ganhar = 0, jogador = 1;

    do
    {

        do
        {
            if (jogador == 1)
            {
                printf("Primeiro jogador:\n");
            }
            else
            {
                printf("Segundo jogador:\n");
            }
            scanf("%d %d", &x, &y);
            x = x - 1;
            y = y - 1;
            CV = coordenadaCerta(x, y);
            if (CV == 1)
            {
                CV = CV + posicaVazia(x, y, mat);
            }

        } while (CV != 2);
        if (jogador == 1)
        {
            mat[x][y] = 1;
        }
        else
        {
            mat[x][y] = 2;
        }
        jogos++;
        jogador++;
        if (jogador == 3)
        {
            jogador = 1;
        }
        ganhar = ganhar + linhas(mat);
        ganhar = ganhar + coluna(mat);
        ganhar = ganhar + diagonal1(mat);
        ganhar = ganhar + diagonal2(mat);
        imprimir(mat);
    } while (ganhar == 0 && jogos < 9);
    if (ganhar != 0)
    {
        imprimir(mat);
        if (jogador - 1 == 1)
        {
            printf("\nParabens jogador 1 venceu \n");
        }
        else
        {
            printf("\nParabens jogador 2 venceu\n");
        }
    }
    else
    {
        printf("\nQue feio. Ninguem venceu!\n\n");
    }
    return 0;
}
