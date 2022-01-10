#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um número inteiro positivo N e imprima todos os 
   números naturais de 0 até N em ordem crescente. */

int main(void)
{

    int N, i = 0;

    printf("Informe um valor N \n");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d \n", i);
        i++;
    }
    system("pause");
    return 0;
}