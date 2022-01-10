#include <stdio.h>
#include <stdlib.h>

/* Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros. */

int main(void)
{

    int vet[3] = {10, 5, 5};
    int result;
    int somavetor(int *v, int t);

    result = somavetor(vet, 3);

    printf("A soma dos valores do vetor eh: %d \n", result);

    system("pause");
    return 0;
}

int somavetor(int *v, int t)
{
    int soma;
    int i = 0;

    if (t > 0)
    {
        soma = *(v + t - 1) + somavetor(v, t - 1);
    }
    else
    {
        soma = 0;
    }

    return soma;
}
