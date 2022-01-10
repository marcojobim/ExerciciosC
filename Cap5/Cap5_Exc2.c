#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um número inteiro positivo N e imprima todos os 
   números naturais de 0 até N em ordem decrescente.*/

int main(void)
{

    int N;

    printf("Informe um valor N \n");
    scanf("%d", &N);

    int i = N;

    while (i >= 0)
    {
        printf(" %d ", i);
        i--;
    }
    system("pause");
    return 0;
}