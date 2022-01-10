#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros 
   números naturais que não são múltiplos de 7.
   Ao final, imprima esse vetor na tela. */

int main(void)
{

    int vet[100], resto, i;
    int count = 1;

    i = 0;

    while (i < 100)
    {
        resto = count % 7;
        if (resto != 0)
        {
            vet[i] = count;
            count++;
            printf(" %d\n", vet[i]);
        }
        else
        {
            count++;
        }
        i++;
    }

    system("pause");
    return 0;
}