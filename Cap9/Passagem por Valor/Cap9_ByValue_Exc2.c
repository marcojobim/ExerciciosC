#include <stdio.h>
#include <stdlib.h>

/* Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o 
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. 
Exemplo: Entrada = 4. Saída = abril. */

void retorna_mes(int mes);

int main(void)
{

    void retorna_mes(int mes);
    int num;

    printf("Digite um numero de 1 a 12 \n");
    scanf("%d", &num);

    retorna_mes(num);

    system("pause");
    return 0;
}

void retorna_mes(int mes)
{

    int t = 30;
    int t1 = 31;
    int f = 28;

    switch (mes)
    {

    case 1:
    {
        printf("Janeiro \n");
        printf("%d dias \n", t1);
        break;
    }
    case 2:
    {
        printf("Fevereiro \n");
        printf("%d dias \n", f);
        break;
    }
    case 3:
    {
        printf("Marco \n");
        printf("%d dias \n", t1);
        break;
    }
    case 4:
    {
        printf("Abril \n");
        printf("%d dias \n", t);
        break;
    }
    case 5:
    {
        printf("Maio \n");
        printf("%d dias \n", t1);
        break;
    }
    case 6:
    {
        printf("Junho \n");
        printf("%d dias \n", t);
        break;
    }
    case 7:
    {
        printf("Julho \n");
        printf("%d dias \n", t1);
        break;
    }
    case 8:
    {
        printf("Agosto \n");
        printf("%d dias \n", t1);
        break;
    }
    case 9:
    {
        printf("Setembro \n");
        printf("%d dias \n", t);
        break;
    }
    case 10:
    {
        printf("Outubro \n");
        printf("%d dias \n", t1);
        break;
    }
    case 11:
    {
        printf("Novembro \n");
        printf("%d dias \n", t);
        break;
    }
    case 12:
    {
        printf("Dezembro \n");
        printf("%d dias \n", t1);
        break;
    }
    default:
    {
        printf("Numero fora do intervalo \n");
        break;
    }
    }
}