#include "operacoes_jogo.h"

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