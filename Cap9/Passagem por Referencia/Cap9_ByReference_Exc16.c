#include <stdio.h>
#include <stdlib.h>
#define TAM 2

/* Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior elemento do vetor e o número de vezes que esse elemento ocorreu 
no vetor. */

int main(void)
{

    int vet[TAM];
    int maior, count;
    void retorna_maior(int *vt, int t, int *mai, int *quant);

    for (int i = 0; i < TAM; i++)
    {
        printf("Informe o valor %d do vetor \n", i + 1);
        scanf("%d", &vet[i]);
    }

    retorna_maior(vet, TAM, &maior, &count);

    printf("O maior valor do vetor eh: %d | Ele apareceu %d vezes \n", maior, count);

    system("pause");
    return 0;
}

void retorna_maior(int *vt, int t, int *mai, int *quant)
{

    // Achando o maior

    for (int i = 0; i < t; i++)
    {
        if (i == 0)
        {
            *mai = vt[i];
        }
        if (vt[i] > *mai)
        {
            *mai = vt[i];
        }
    }

    // Contando quantas vezes o maior repete

    *quant = 0;
    for (int i = 0; i < t; i++)
    {
        if (vt[i] == *mai)
        {
            *quant = *quant + 1;
        }
    }
}
