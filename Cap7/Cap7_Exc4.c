#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e a imprima de trás para a frente. */

int main(void)
{
    char str[10];
    int i, tamanho;

    printf("Digite uma palavra \n");
    setbuf(stdin, NULL);
    fgets(str, 10, stdin);

    tamanho = strlen(str);

    for (i = tamanho; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}
