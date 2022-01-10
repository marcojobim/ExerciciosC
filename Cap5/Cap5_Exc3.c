#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares. */

int main(void)
{

    int N, i = 1;

    printf("Informe um numero N \n");
    scanf("%d", &N);

    while (i <= N)
    {
        printf(" %d ", i);
        i = i + 2;
        N++;
    }

    system("pause");
    return 0;
}