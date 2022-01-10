#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que, dado um número real passado como parâmetro, retorne 
a parte inteira e a parte fracionária desse número por referência. */

int main(void)
{

    float num, fracionaria;
    int inteira;
    void separa_partes(float num, float *x, int *y);

    printf("Informe um numero \n");
    scanf("%f", &num);

    separa_partes(num, &fracionaria, &inteira);

    printf("Parte inteira: %d | Parte fracionaria: %f \n", inteira, fracionaria);

    system("pause");
    return 0;
}

void separa_partes(float num, float *x, int *y)
{

    *y = (int)num;
    *x = num - *y;
}