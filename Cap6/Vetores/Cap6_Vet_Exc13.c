#include <stdio.h>
#include <stdlib.h>

/* Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
   Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, 
   caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número.
   Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre 
   os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado. */

int main(void)
{

    int vet[10], aux;

    printf("Informe o valor da posicao 0 \n");
    scanf("%d", &vet[0]);
    aux = vet[0];

    for (int i = 1; i < 10; i++)
    {
        printf("Informe o valor da posicao %d \n", i);
        scanf("%d", &vet[i]);

        if (vet[i] == aux)
        {
            printf("Valor invalido, insira um valor diferente \n");
            i--;
        }
    }

    printf("Vetor:");

    for (int i = 0; i < 10; i++)
    {
        printf(" %d", vet[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}