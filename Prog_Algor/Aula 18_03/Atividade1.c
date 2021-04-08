#include <stdio.h>
int main()
{
    int anonasc,anoatual, idade;
    printf("\nDigite o ano de nascimento:\t");
    scanf("%d%*c",&anonasc);
    printf ("Digite ano atual\t");
    scanf("%d%*c",&anoatual);
    idade = anoatual - anonasc;
    printf("\nSua idade eh %d", idade);
    printf("\nSua idade em 2050 eh %d", 2050 - anonasc);

    getchar();
    return 0;
}
