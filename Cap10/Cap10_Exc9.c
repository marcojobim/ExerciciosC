#include <stdio.h>
#include <stdlib.h>

/* Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize 
índices para percorrer o vetor, apenas aritmética de ponteiros. */

int main(void)
{

    int vet[] = {7, 5, 10, 4, 8};
    void imprime_vetor(int *vetor, int tam);

    imprime_vetor(vet, 5);

    system("pause");
    return 0;
}

void imprime_vetor(int *vetor, int tam)
{
    int *pont;

    pont = vetor;

    for (int i = 0; i < tam; i++)
    {
        printf(" %d", *pont);
        pont++;
    }

    printf("\n");
}