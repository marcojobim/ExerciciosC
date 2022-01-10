#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia certa quantidade de números, imprima o maior 
   deles e quantas vezes o maior número foi lido. A quantidade de números a serem 
   lidos deve ser fornecida pelo usuário. */

int main(void)
{
    int tam, num, maior, count;

    printf("Informe a quantidade de numeros que serao analisados \n");
    scanf("%d", &tam);

    printf("Digite um numero \n");
    scanf("%d", &num);
    maior = num;
    count = 1;

    for (int i = 1; i < tam; i++)
    {
        printf("Digite um numero \n");
        scanf("%d", &num);

        if (maior == num)
        {
            count++;
        }

        if (num > maior)
        {
            maior = num;
        }
    }

    printf("O maior numero digitado foi %d e ele repetiu %d vezes \n", maior, count);

    system("pause");
    return 0;
}