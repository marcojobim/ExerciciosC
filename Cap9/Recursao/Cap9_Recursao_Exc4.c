#include <stdio.h>
#include <stdlib.h>

/* Crie uma função recursiva que receba um número inteiro N e imprima todos os 
números naturais de 0 até N em ordem decrescente. */

void nprimeiros_decrescente(int x);

int main(void)
{

    int N;
    void nprimeiros_decrescente(int x);

    printf("Informe um numero qualquer \n");
    scanf("%d", &N);

    nprimeiros_decrescente(N);

    printf("\n");

    system("pause");
    return 0;
}

void nprimeiros_decrescente(int x)
{

    printf(" %d", x);
    if (x > 0)
    {
        nprimeiros_decrescente(x - 1);
    }
}