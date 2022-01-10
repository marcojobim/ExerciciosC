#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos 
   elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule 
   também a soma dos elementos que não pertencem a nenhuma das duas diagonais. 
   Imprima na tela a diferença entre os dois valores. */

int main(void)
{

    int mat[5][5];
    int soma_dp, soma_ds, soma_resto;
    int resultado;

    printf("Informe os valores da matriz \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    soma_dp = soma_ds = soma_resto = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                soma_dp = mat[i][j] + soma_dp;
            }

            else if (i + j + 2 == 6)
            {
                soma_ds = mat[i][j] + soma_ds;
            }

            else
            {
                soma_resto = mat[i][j] + soma_resto;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", mat[i][j]);
        }
    }
    printf("\n");

    printf("DP: %d | DS: %d | RESTO: %d \n", soma_dp, soma_ds, soma_resto);

    resultado = (soma_dp + soma_ds) - soma_resto;

    printf("Diferenca: %d \n", resultado);

    system("pause");
    return 0;
}