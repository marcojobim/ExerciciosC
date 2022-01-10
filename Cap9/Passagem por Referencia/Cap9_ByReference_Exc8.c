#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas 
e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da 
sua diagonal principal e da sua diagonal secundária. */

int main(void)
{

    // Fazer só da diagonal principal, ja usei diagonal secundária em outros exercícios

    int mat[2][2];
    int soma_dp;
    void soma_diagonal_principal(int mat[][2], int n, int *sma);

    printf("Informe os valores da matriz \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    soma_diagonal_principal(mat, 2, &soma_dp);

    printf("Soma da diagonal principal: %d \n", soma_dp);

    system("pause");
    return 0;
}

void soma_diagonal_principal(int mat[][2], int n, int *sma)
{

    *sma = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i == j)
            {
                *sma = *sma + mat[i][j];
            }
        }
    }
}