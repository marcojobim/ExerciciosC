#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um programa que leia o nome e o valor de determinada mercadoria de 
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor 
total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor 
total, o valor do desconto e o valor a ser pago à vista. */

int main(void)
{

    char produto[20];
    float precoTotal;
    float precoFinal;
    float desconto;

    printf("Informe o nome da mercadoria: \n");
    fgets(produto, 19, stdin);

    printf("Informe o preco da mercadoria: \n");
    scanf("%f", &precoTotal);

    desconto = precoTotal * 0.1;
    precoFinal = precoTotal - desconto;

    printf("Mercadoria: %s ", produto);
    printf("Valor total: %f \n", precoTotal);
    printf("Desconto: %f \n", desconto);
    printf("Valor a vista: %f \n", precoFinal);

    system("pause");
    return 0;
}
