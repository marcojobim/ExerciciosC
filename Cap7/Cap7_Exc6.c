#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre 
com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada 
por esse caractere. Ao final, imprima a nova string e o número de vogais que ela 
possui. */

int main(void)
{
    char str[20];
    char letra;
    int count = 0;

    printf("Digite uma palavra \n");
    fgets(str, 20, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    printf("Digite uma letra \n");
    scanf("%c", &letra);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = letra;
        }
    }

    printf("Numero de vogais: %d \n", count);
    printf("Nova palavra: %s \n", str);

    system("pause");
    return 0;
}