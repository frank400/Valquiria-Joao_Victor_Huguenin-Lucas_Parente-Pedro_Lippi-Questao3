#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int posicaVazia(int x, int y,int mat[DIM][DIM])
{
    if (mat[x][y] != 1 && mat[x][y] != 2)
    {
        return 1;
    }else{
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
    }while (ganhar == 0 && jogos < 9);
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
