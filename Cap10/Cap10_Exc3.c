#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array */

int main(void)
{

    float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;

    p = vet;

    for (int i = 0; i < 10; i++)
    {
        printf("%d Endereco: %d \n", i + 1, p++);
    }

    system("pause");
    return 0;
}