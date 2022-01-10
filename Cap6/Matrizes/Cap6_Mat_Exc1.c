#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o 
   menor valor contido nessa matriz. */

int main(void)
{
    int mat[3][3];
    int maior, menor, i, j;

    printf("Informe os valores da matriz \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
            if (i == 0 && j == 0)
            {
                menor = mat[i][j];
                maior = mat[i][j];
            }

            if (mat[i][j] < menor)
            {
                menor = mat[i][j];
            }

            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
        }
    }

    printf("O menor valor da matriz eh %d \n", menor);
    printf("O maior valor da matriz eh %d \n", maior);

    system("pause");
    return 0;
}