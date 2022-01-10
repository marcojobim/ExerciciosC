#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha uma matriz de float contendo três linhas e três 
colunas. Imprima o endereço de cada posição dessa matriz. */

int main(void)
{

    float mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *endrc;

    endrc = mat;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Endereco da posicao [%d][%d]: %d \n", i + 1, j + 1, endrc++);
        }
    }

    system("pause");
    return 0;
}