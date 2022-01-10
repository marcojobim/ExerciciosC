#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano.
Em seguida, leia duas datas e armazene nessa estrutura.
Calcule e exiba o número de dias que decorreram entre as duas datas. */

struct data
{
    int dia;
    int mes;
    int ano;
};

int main(void)
{

    struct data d1;
    struct data d2;

    //Lendo duas datas

    printf("Informe a primeira data separada por / : \n");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);

    printf("Informe a segunda data separada por / : \n");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    // Calculando a diferenca de dias decooridos

    // Trasnformando meses em dias

    int mes_dias1, mes_dias2;

    mes_dias1 = (d1.mes * 30) + (1 * (d1.mes / 2));
    mes_dias2 = (d2.mes * 30) + (1 * (d2.mes / 2));

    // Transformando anos em dias

    int ano_dias1, ano_dias2;

    ano_dias1 = d1.ano * 365;
    ano_dias2 = d2.ano * 365;

    // Somando todos os dias

    int total_dias1, total_dias2;

    total_dias1 = mes_dias1 + ano_dias1 + d1.dia;
    total_dias2 = mes_dias2 + ano_dias2 + d2.dia;

    // Diferença

    int diferenca;

    if (total_dias1 > total_dias2)
    {
        diferenca = total_dias1 - total_dias2;
    }

    else if (total_dias2 > total_dias1)
    {
        diferenca = total_dias2 - total_dias1;
    }

    else
    {
        diferenca = 0;
    }

    printf("%d Dias de diferenca entre as duas datas informadas \n", diferenca);

    system("pause");
    return 0;
}

// Achar uma forma de implementar isso de um jeito melhor (com fevereiro certo, bissexto, etc)