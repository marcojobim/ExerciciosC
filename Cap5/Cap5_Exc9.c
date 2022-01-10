#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

int main(void)
{

    int N, i, maior, menor;

    printf("Informe o 1 valor \n");
    scanf("%d", &N);

    maior = N;
    menor = N;

    for (i = 1; i < 10; i++)
    {
        printf("Informe o %d valor \n", i + 1);
        scanf("%d", &N);

        if (N > maior)
        {
            maior = N;
        }
        if (N < menor)
        {
            menor = N;
        }
    }

    printf("O maior numero eh o %d | O menor numero eh o %d \n", maior, menor);

    system("pause");
    return 0;
}
