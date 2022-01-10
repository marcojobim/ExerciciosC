#include <stdio.h>
#include <stdlib.h>

/* Crie uma função recursiva que receba um número inteiro N e imprima todos os 
números naturais de 0 até N em ordem crescente. */

void nprimeiros_crescente(int x);

int main(void)
{

    int N;
    void nprimeiros_crescente(int x);

    printf("Informe um numero qualquer \n");
    scanf("%d", &N);

    nprimeiros_crescente(N);

    printf("\n");

    system("pause");
    return 0;
}

void nprimeiros_crescente(int x)
{
    if (x > 0)
    {
        nprimeiros_crescente(x - 1);
    }
    printf(" %d", x);
}