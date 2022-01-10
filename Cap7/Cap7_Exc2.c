#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e imprima as quatro primeiras letras dela. */

int main(void)
{
    char str[10];

    printf("Digite uma palavra \n");
    fgets(str, 10, stdin);

    for (int i = 0; i < 4; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
