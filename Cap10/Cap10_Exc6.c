#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array contendo cinco elementos inteiros. 
Leia esse array do teclado e imprima o endereço das posições contendo valores 
pares. */

int main(void)
{

    int vet[5];
    int *p;

    p = vet;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o %d valor: \n", i + 1);
        scanf("%d", p);
        p++;
    }

    p = vet;

    for (int i = 0; i < 5; i++)
    {
        if (*p % 2 == 0 || *p == 0)
        {
            printf("Endereco: %d | Confirmacao: %d \n", p, *p);
        }
        p++;
    }

    system("pause");
    return 0;
}