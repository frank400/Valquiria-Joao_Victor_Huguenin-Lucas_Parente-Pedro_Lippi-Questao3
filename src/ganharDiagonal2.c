#include "operacoes_jogo.h"

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