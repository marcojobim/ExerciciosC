#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peça ao usuário para digitar 10 valores. Some esses 
   valores e apresente o resultado na tela. */

int main(void)
{

    int N, soma, i;
    soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Informe o %d valor \n", i + 1);
        scanf("%d", &N);
        soma = N + soma;
    }

    printf("A soma eh de %d \n", soma);

    system("pause");
    return 0;
}