#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule e retorne o resultado de x y
para o programa principal. Não use nenhuma função pronta para isso. */

int potencia(int x, int y);

int main(void)
{

    int a, b, resultado;
    int potencia(int x, int y);

    printf("Informe o primeiro numero \n");
    scanf("%d", &a);
    printf("Informe o segundo numero \n");
    scanf("%d", &b);

    resultado = potencia(a, b);

    printf("Potencia: %d \n", resultado);

    system("pause");
    return 0;
}

int potencia(int x, int y)
{

    int pot = 1;

    if (y == 0)
    {
        pot = 1;
    }

    else
    {
        for (int i = 0; i < y; i++)
        {
            pot = pot * x;
        }
    }

    return pot;
}