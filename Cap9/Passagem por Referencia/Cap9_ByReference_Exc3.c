#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba um array de 10 elementos e retorne a sua soma. */

int main(void)
{

    int vet[10];
    int soma;
    void soma_posic(int *v, int t, int *sma);

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %d valor: \n", i + 1);
        scanf("%d", &vet[i]);
    }

    soma_posic(vet, 10, &soma);

    printf("Soma dos elementos do vetor: %d \n", soma);

    system("pause");
    return 0;
}

void soma_posic(int *v, int t, int *sma)
{

    *sma = 0;

    for (int i = 0; i < t; i++)
    {
        *sma = *sma + v[i];
    }
}