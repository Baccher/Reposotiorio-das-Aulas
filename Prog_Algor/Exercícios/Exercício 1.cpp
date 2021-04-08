#include <stdio.h>

int main ()
{
    /*Faça um programa que receba quatro números inteiros, calcule e mostre a soma 
desses números.
*/
    int num1, num2, num3, num4, soma;
    printf("\nEscreva o primeiro numero inteiro para a soma, ");
    scanf("%d%*c", &num1);
    printf("\nEscreva o segundo numero inteiro para a soma, ");
    scanf("%d%*c", &num2);
    printf("\nEscreva o terceiro numero inteiro para a soma, ");
    scanf("%d%*c", &num3);
    printf("\nEscreva o quarto numero inteiro para a soma, ");
    scanf("%d%*c", &num4);

    soma = num1 + num2 + num3 + num4;
    printf("O resultado da soma dos quatro numeros eh %d", soma);

    getchar();
    return 0;
}
