#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1414592

/* Escreva uma função para o cálculo do volume e área de uma esfera em que π = 3.1414592. 
O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser retornados por referência. */

double area(float *r)
{

    double area;
    area = 4 * PI * pow(*r, 2);
    return area;
}

double volume(float *r)
{

    double volume;
    volume = 4 * PI * pow(*r, 3) / 3;
    return volume;
}

int main(void)
{
    float raio, area_esfera, volume_esfera;
    double area(float *r);
    double volume(float *r);

    printf("Informe o raio da esfera \n");
    scanf("%f", &raio);

    area_esfera = area(&raio);
    volume_esfera = volume(&raio);

    printf("AREA: %lf | VOLUME: %lf \n", area_esfera, volume_esfera);

    system("pause");
    return 0;
}