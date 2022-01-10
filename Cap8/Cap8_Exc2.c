#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas,
isto é, a posição (0,0). */

struct coordenadas
{
    float x;
    float y;
};

int main(void)
{

    struct coordenadas p1;
    struct coordenadas origem = {0, 0};
    struct coordenadas distancia;

    printf("Informe um ponto x \n");
    scanf("%f", &origem.x);

    printf("Informe um ponto y \n");
    scanf("%f", &origem.y);

    distancia.x = p1.x - origem.x;
    distancia.y = p1.y - origem.y;

    if (distancia.x < 0)
    {
        distancia.x = distancia.x * (-1);
    }

    if (distancia.y < 0)
    {
        distancia.y = distancia.y * (-1);
    }

    printf("Distancia: (%f,%f) \n", distancia.x, distancia.y);

    system("pause");
    return 0;
}