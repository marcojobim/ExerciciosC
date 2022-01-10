#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e a imprima na tela. */

int main(void)
{
    char str[10];

    printf("Digite uma palavra \n");

    setbuf(stdin, NULL);
    fgets(str, 10, stdin);
    fputs(str, stdout);

    system("pause");
    return 0;
}
