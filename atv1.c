#include <stdio.h>

int parImpar(int num);

int main()

{

    int num;

    printf("Digite um número: ");

    scanf("%d", &num);

    parImpar(num);
}

int parImpar(int num)
{

    if (num % 2 == 0)
    {

        printf("O número é par!");
    }
    else
    {

        printf("O número é ímpar!");
    }
}