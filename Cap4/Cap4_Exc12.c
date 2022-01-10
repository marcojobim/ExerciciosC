#include <stdio.h.>
#include <stdlib.h>

int main(void)
{

    /* Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
    e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, 
    segunda-feira, se 2, e assim por diante.*/

    int i;

    printf("Informe um numero de 1 a 7 \n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
    {
        printf("Domingo \n");
        break;
    }
    case 2:
    {
        printf("Segunda \n");
        break;
    }
    case 3:
    {
        printf("Terca \n");
        break;
    }
    case 4:
    {
        printf("Quarta \n");
        break;
    }
    case 5:
    {
        printf("Quinta \n");
        break;
    }
    case 6:
    {
        printf("Sexta \n");
        break;
    }
    case 7:
    {
        printf("Sabado \n");
        break;
    }
    default:
        printf("Numero invalido \n");
    }

    system("pause");
    return 0;
}