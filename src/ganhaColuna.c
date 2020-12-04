#include "operacoes_jogo.h"

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