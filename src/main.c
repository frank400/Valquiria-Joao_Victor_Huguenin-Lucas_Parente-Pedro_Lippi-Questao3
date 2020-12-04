#include <stdio.h>
#include <stdlib.h>

#define DIM 3
int diagonal1(int mat[DIM][DIM])
{
    int cont = 1;
    for (int i = 0; i < DIM-1; i++)
    {
        if (coordenada(mat[i][i]) && mat[i][i] == mat[i + 1][i + 1])
        {
            cont++;
        }
    }
    if (cont == DIM)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int diagonal2(int mat[DIM][DIM])
{
    int cont = 1;
    for (int i = 0; i < DIM-1; i++)
    {
        if (coordenada(mat[i][DIM - i - 1]) && mat[i][DIM - i - 1] == mat[i + 1][DIM - i - 2])
        {
            cont++;
        }
    }
    if (cont == DIM)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int coluna(int mat[DIM][DIM]) {
    int cont = 1;
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM - 1; j++) {
            if (coordenada(mat[j][i]) && mat[j][i] == mat[j + 1][i]) {
                cont++;
            }
        }
        if (cont == DIM) {
            return 1;
        }
        cont = 1;
    }
    return 0;
}
int coordenada(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int linhas (int mat[DIM][DIM])
{
    int cont = 1;
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM-1; j++)
        {
            if (coordenada(mat[i][j]) && mat[i][j] == mat[i][j + 1])
            {
                cont++;
            }
        }
        if (cont == DIM)
        {
            return 1;
        }
        cont = 1;
    }
    return 0;
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

    do{
    
        do{
            if(jogador == 1){
                printf("Primeiro jogador:\n");
            }else {
                printf("Segundo jogador:\n");
            }
            scanf("%d %d", &x, &y);
            x = x - 1;
            y = y - 1;
            CV = coordenadaCerta(x, y);
            if (CV == 1)
            {
                CV = CV + posicaVazia(x, y,mat);
            }
            
        } while (CV != 2);
    }while (ganhar == 0 && jogos < 9);
    
    return 0;
}
