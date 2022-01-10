#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um número inteiro e calcule a soma de todos os 
   divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores 
   do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78. */

int main(void)
{
    int num, resto, soma;

    printf("Digite um numero para saber a soma de seus divisores \n");
    scanf("%d", &num);

    soma = 0;

    for (int i = 1; i <= num - 1; i++)
    {
        resto = num % i;
        if (resto == 0)
        {
            soma = soma + i;
        }
    }
    printf("%d \n", soma);

    system("pause");
    return 0;
}