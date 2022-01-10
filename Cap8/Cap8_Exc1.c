#include <stdio.h>
#include <stdlib.h>

/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e 
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da 
estrutura lida. */

struct cadastro
{
    char nome[50];
    int idade;
    char endereco[100];
};

int main(void)
{
    struct cadastro c;

    setbuf(stdin, NULL);

    // Lendo os valores

    printf("Nome(Sem espacos): ");
    scanf("%s", c.nome);

    printf("Idade: ");
    scanf("%d", &c.idade);

    printf("Endereco(Sem espacos): ");
    scanf("%s", c.endereco);

    // Imprimindo os valores

    printf("%s \n", c.nome);
    printf("%d \n", c.idade);
    printf("%s \n", c.endereco);

    system("pause");
    return 0;
}

//Gets e Fgets é do mal kkkkkk, usar scan e print majoritariamente