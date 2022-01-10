#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro dois números e retorne o maior 
deles. */

int maior(int n, int m)
{
    int maior;

    if (n > m)
    {
        maior = n;
    }
    else if (n < m)
    {
        maior = m;
    }
    else
    {
        printf("Eles sao iguais \n");
        return 0;
    }

    return maior;
}

int main(void)
{
    int n1, n2, comp;

    printf("Informe dois numeros inteiros para compara-los \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    comp = maior(n1, n2);

    if (comp != 0)
    {
        printf("Maior: %d \n", comp);
    }

    system("pause");
    return 0;
}