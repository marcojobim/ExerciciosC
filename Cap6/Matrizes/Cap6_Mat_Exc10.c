#include <stdio.h>
#include <stdlib.h>

/* Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em 
   seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, 
   o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior 
   nota foi na prova 3. */

int main(void)
{

    int notas[10][3];
    int count1, count2, count3;
    int menor[10];

    count1 = count2 = count3 = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe a nota da prova %d do aluno %d \n", j + 1, i + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            menor[i] = notas[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (menor[i] > notas[i][j])
            {
                menor[i] = j + 1;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {

        if (menor[i] == 2)
        {
            count2++;
        }
        else if (menor[i] == 3)
        {
            count3++;
        }
        else
        {
            count1++;
            menor[i] = 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", notas[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf(" %d", menor[i]);
    }

    printf("\n");
    printf("%d | %d | %d \n", count1, count2, count3);

    system("pause");
    return 0;
}
