#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois 
   valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa 
   deverá exibir a soma dos valores encontrados nas respectivas posições X e Y. */

int main(void)
{

    int vet[8];
    int x, y, soma;

    printf("Informe os 8 numeros do vetor \n");

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("Informe duas posicoes do vetor \n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("%d \n", soma);

    system("pause");
    return 0;
}