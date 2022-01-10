#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for 
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo). 
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor 
deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente. */

int main(void)
{

    int N;
    int x = 0;
    int *p;

    do
    {
        printf("Informe um numero natural positivo \n");
        scanf("%d", &N);
        if (N <= 0)
        {
            printf("Valor invalido \n");
        }
        else
        {
            x++;
        }
    } while (x != 1);

    p = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        printf("Informe o %d valor: \n", i + 1);
        scanf("%d", p);
        if (*p < 2)
        {
            printf("Valor invalido \n");
            i--;
        }
        else
        {
            p++;
        }
    }

    p = p - N;

    for (int i = 0; i < N; i++)
    {
        printf(" %d", *p);
        p++;
    }
    printf("\n");

    system("pause");
    return 0;
}