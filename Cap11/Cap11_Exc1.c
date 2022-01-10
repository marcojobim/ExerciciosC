#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que mostre o tamanho em byte que cada tipo de dados 
ocupa na memória: char, int, float, double. */

int main(void)
{

    printf("Tamanho de char: %d byte \n", sizeof(char));
    printf("Tamanho de int: %d bytes \n", sizeof(int));
    printf("Tamanho de float: %d bytes \n", sizeof(float));
    printf("Tamanho de double: %d bytes \n", sizeof(double));

    system("pause");
    return 0;
}