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
    
    return 0;
}
