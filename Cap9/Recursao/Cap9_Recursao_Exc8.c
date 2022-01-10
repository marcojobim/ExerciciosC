#include <stdio.h>
#include <stdlib.h>

/* A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2).
Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros. */

int main(void)
{

    int n1, n2, multiplicacao;

    printf("Informe dois numeros inteiros \n");
    scanf("%d %d", &n1, &n2);

    multiplicacao = multiplica(n1, n2);

    printf("%d \n", multiplicacao);

    system("pause");
    return 0;
}

int multiplica(int x, int y)
{

    int resultado;

    if (x == 0 || y == 0)
    {
        resultado = 0;
    }

    else
    {
        resultado = x + multiplica(x, y - 1);
    }

    return resultado;
}
