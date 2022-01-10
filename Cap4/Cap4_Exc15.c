#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    /* Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação,  lembrando que as raízes são calculadas como "Fórmula de Bhaskara" em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:

    • Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
    • Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
    • Se ∆ > 0, existem duas raízes reais. Imprima as raízes. */

    float a, b, c;
    float delta, r1, r2;

    printf("Informe o valor de A,B e C \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == 0)
        printf("Nao eh uma equacao do segundo grau \n");

    else
    {
        delta = pow(b, 2) - (4 * a * c);

        if (delta < 0)
        {
            printf("A equacao nao possui raizes reais \n");
        }

        else if (delta == 0)
        { // Não tenho certeza se essa parte esta o mais correto possivel
            printf("A raiz so possui uma raiz real \n");
            r1 = ((-b) + sqrt(delta)) / (2 * a);
            r2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("Raiz: %f \n", r1);
        }

        else
        {
            r1 = ((-b) + sqrt(delta)) / (2 * a);
            r2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("A equacao possui duas raizes reais \n");
            printf("Raiz 1: %f | Raiz 2: %f \n", r1, r2);
        }
    }

    system("pause");
    return 0;
}
