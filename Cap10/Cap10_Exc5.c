#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de inteiros contendo cinco elementos. 
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o 
dobro de cada valor lido. */

int main(void)
{

    int vet[5];
    int *p;

    p = vet;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o valor %d do vetor: \n", i + 1);
        scanf("%d", p);
        p++;
    }

    p = vet;

    for (int i = 0; i < 5; i++)
    {
        printf("Valor em dobro: %d \n", (*p) * 2);
        p++;
    }

    system("pause");
    return 0;
}
