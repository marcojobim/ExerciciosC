#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura 
deve conter o número de matrícula do aluno, seu nome e as notas de três provas. 
Escreva um programa que mostre o tamanho em byte dessa estrutura. */

struct aluno
{
    int rga;
    char nome[50];
    float notas[3];
};

int main(void)
{

    struct aluno a1;

    printf("Tamanho da struct: %d bytes \n", sizeof(struct aluno));

    system("pause");
    return 0;
}