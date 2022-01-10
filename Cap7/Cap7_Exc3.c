#include <stdio.h>
#include <stdlib.h>

/* Sem usar a função strlen(), faça um programa que leia uma string e imprima 
quantos caracteres ela possui. */

int main(void)
{
    char str[10];
    int count = 0;

    printf("Digite uma palavra \n");
    setbuf(stdin, NULL);
    fgets(str, 10, stdin);

    while (str[count] != '\0')
    {
        count++;
    }

    printf("%d sem o valor nulo | %d com o valor nulo \n", count, count + 1);

    system("pause");
    return 0;
}
