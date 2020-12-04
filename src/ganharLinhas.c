#include "operacoes_jogo.h"

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