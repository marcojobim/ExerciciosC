#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    /* Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo).
       O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.*/

    int n1, n2;
    int soma, subtracao, multiplicacao, divisao;
    char operador;

    printf("Informe o operador \n");
    operador = getchar();

    printf("Informe dois numeros \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    switch (operador)
    {

    case '+':
    {
        soma = n1 + n2;
        printf("%d \n", soma);
        break;
    }

    case '-':
    {
        subtracao = n1 - n2;
        printf("%d \n", subtracao);
        break;
    }

    case '*':
    {
        multiplicacao = n1 * n2;
        printf("%d \n", multiplicacao);
        break;
    }

    case '/':
    {
        divisao = n1 / n2;
        printf("%d \n", divisao);
        break;
    }
    default:
        printf("Operacao invalida \n");
    }

    system("pause");
    return 0;
}