#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do 
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

int main(void)
{
    int v1, v2;
    int *e1, *e2;

    printf("Informe dois valores \n");
    scanf("%d", &v1);
    scanf("%d", &v2);

    e1 = &v1;
    e2 = &v2;

    if (e1 > e2)
        printf("O valor que possui o maior endereco eh o %d \n", *e1);

    else
        printf("O valor que possui o maior endereco eh o %d \n", *e2);

    printf("%d | %d \n", e1, e2);

    system("pause");
    return 0;
}