#include <stdio.h>
#include <stdlib.h>

/* Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela. */

int main(void)
{

    float vet[10];
    float aux;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor da posicao %d \n", i);
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("Vetor Ordenado:");
    for (int i = 0; i < 10; i++)
    {
        printf(" %f", vet[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}