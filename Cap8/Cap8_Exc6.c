#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura 
deve conter o número de matrícula do aluno, seu nome e as notas de três provas. 
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa 
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média 
geral dentre os cinco. */

struct aluno
{
    int matricula;
    char nome[50];
    int notas[3];
};

int main(void)
{

    struct aluno a[5];
    int i = 0;

    do
    {
        printf("Aluno %d \n", i + 1);

        printf("Informe o numero de matricula \n");
        scanf("%d", &a[i].matricula);

        printf("Informe o nome do aluno \n");
        scanf("%s", &a[i].nome);

        for (int j = 0; j < 3; j++)
        {
            printf("Informe a nota da prova %d \n", j + 1);
            scanf("%d", &a[i].notas[j]);
        }
        i++;
    }

    while (i < 5);

    // Calculando a maior média

    int media[5], maior, pos_maior;

    for (int i = 0; i < 5; i++)
    {
        media[i] = (a[i].notas[0] + a[i].notas[1] + a[i].notas[2]) / 3;
        if (i == 0)
        {
            maior = media[i];
            pos_maior = i;
        }

        if (media[i] > maior)
        {
            maior = media[i];
            pos_maior = i;
        }
    }

    // Exibindo os dados do aluno com maior média

    printf("Nome: %s \n", a[pos_maior].nome);

    for (int i = 0; i < 3; i++)
    {
        printf("Nota %d: %d \n", i + 1, a[pos_maior].notas[i]);
    }

    printf("Media: %d \n", media[pos_maior]);

    system("pause");
    return 0;
}
