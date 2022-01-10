#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço. */

int main(void)
{
    int v1 = 3;
    int v2 = 4;
    int *e1, *e2;

    e1 = &v1;
    e2 = &v2;

    if (e1 > e2)
        printf("O endereco %d  de %d eh maior que o endereco %d de %d \n", e1, *e1, e2, *e2);

    else
        printf("O endereco %d  de %d eh maior que o endereco %d de %d \n", e2, *e2, e1, *e1);

    system("pause");
    return 0;
}