#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que leia uma string e imprima uma mensagem dizendo se ela 
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade 
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 
Exemplos: ovo, arara, rever, asa, osso etc. */

int main(void)
{

    char str[20];
    char rev[20];
    int i, j, tam;

    printf("Digite uma palavra \n");
    fgets(str, 20, stdin);

    printf("Tamanho: %d | Palavra: %s \n", strlen(str), str); // O tamanho aqui inclui o \0;

    tam = strlen(str);
    strcpy(rev, str);

    j = tam - 2;

    for (i = 0; i < tam - 2; i++)
    {
        if (str[i] != rev[j])
        {
            printf("Nao eh palindromo \n");
            return 0;
        }
        j--;
    }

    printf("Eh palindromo \n");

    system("pause");
    return 0;
}
