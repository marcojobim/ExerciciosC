#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11,
   22, 33 e 66 */

int main(void)
{
    int num, resto;

    printf("Digite um numero para saber seus divisores \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        resto = num % i;
        if (resto == 0)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    system("pause");
    return 0;
}