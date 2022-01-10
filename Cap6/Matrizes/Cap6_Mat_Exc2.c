#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o 
   maior valor contido nessa matriz e a sua localização (linha e coluna). */

int main(void)
{

    int mat[4][4];
    int maior, loc_linha, loc_coluna;

    printf("Informe os valores da matriz \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
            if (i == 0 && j == 0)
            {
                maior = mat[i][j];
                loc_linha = i;
                loc_coluna = j;
            }
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
                loc_linha = i;
                loc_coluna = j;
            }
        }
    }

    printf("O maior valor da matriz eh %d \n", maior);
    printf("Sua posicao eh [%d][%d] \n", loc_linha, loc_coluna);

    system("pause");
    return 0;
}