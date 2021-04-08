#include <stdio.h>

int main()
//Faça um programa que receba três notas, calcule e mostre a média aritmética
{
int note1, note2, note3, MedAri;

    printf("\nEscreva o primeiro número, ");
    scanf("%d%*c", &note1);
    printf("\nEscreva o segundo número, ");
    scanf("%d%*c", &note2);
    printf("\nEscreva o terceiro número, ");
    scanf("%d%*c", &note3);

    MedAri = (note1 + note2 + note3) / 3;

    printf("O resultado da media aritmetica das tres notas eh %d", MedAri);

    getchar();
    return 0;
}
