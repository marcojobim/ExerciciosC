#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos.
A função deve retornar esse horário convertido em segundos. */

int convert_to_min(int h);
int convert_to_seg(int hr, int min, int seg);

int main(void)
{

    int hora, minuto, segundo;
    int convertido;
    int convert_to_seg(int hr, int min, int seg);

    printf("Informe um horario separado por ':'  \n");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    convertido = convert_to_seg(hora, minuto, segundo);

    printf("O horario convertido em segundos eh: %d \n", convertido);

    system("pause");
    return 0;
}

int convert_to_min(int h)
{
    int min_by_h;

    min_by_h = h * 60;

    return min_by_h;
}

int convert_to_seg(int hr, int min, int seg)
{
    int seg_by_min1;
    int seg_by_min2;
    int total_seg;
    int convert_to_min(int h);

    seg_by_min1 = convert_to_min(hr) * 60;
    seg_by_min2 = min * 60;

    total_seg = seg_by_min1 + seg_by_min2 + seg;

    return total_seg;
}
