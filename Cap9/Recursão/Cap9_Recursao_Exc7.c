#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y, 
calcule e retorne o resultado de x^y para o programa principal. */

int main(void)
{

    int base, expoente;
    int potencia(int x, int y);
    int result;

    printf("Informe a base e o expoente: \n");
    scanf("%d %d", &base, &expoente);

    result = potencia(base, expoente);

    printf("%d \n", result);

    system("pause");
    return 0;
}

int potencia(int x, int y)
{

    int resultado;

    if (y == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x * potencia(x, y - 1);
    }

    return resultado;
}
