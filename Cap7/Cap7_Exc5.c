#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia uma string e a inverta. A string invertida deve ser 
armazenada na mesma variável. Em seguida, imprima a string invertida. */

int main(void)
{
    char str[10];
    char aux;
    int i, j, tamanho;

    printf("Digite uma palavra \n");
    setbuf(stdin, NULL);
    fgets(str, 10, stdin);

    tamanho = strlen(str);

    for (i = 0; i < tamanho / 2; i++)
    {

        aux = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = aux;
    }

    fputs(str, stdout);
    printf("\n");

    system("pause");
    return 0;
}
