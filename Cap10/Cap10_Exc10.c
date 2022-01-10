#include <stdio.h>
#include <stdlib.h>

/* Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia 
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando 
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o 
triplo, e d, o quádruplo. */

int main(void)
{

    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("Informe um numero qualquer \n");
    scanf("%d", &a);

    printf("Dobro: %d \n", (*b) * 2);
    printf("Triplo: %d \n", (**c) * 3);
    printf("Quadruplo: %d \n", (***d) * 4);

    system("pause");
    return 0;
}
