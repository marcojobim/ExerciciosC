#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em 
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o 
imprima. */

int main(void)
{
    int tam, *p;

    printf("Informe o tamanho do vetor \n");
    scanf("%d", &tam);

    p = (int *)malloc(tam * sizeof(int));

    printf("Informe os %d valores do vetor \n", tam);

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < tam; i++)
    {
        printf(" %d ", *(p + i));
    }

    printf("\n");

    system("pause");
    return 0;
}