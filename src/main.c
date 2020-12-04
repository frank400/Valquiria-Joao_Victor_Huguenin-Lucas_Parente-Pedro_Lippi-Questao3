#include <stdio.h>
#include <stdlib.h>

#define DIM 3

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
