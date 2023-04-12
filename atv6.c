#include <stdio.h>

int calcularMenor(int a, int b);

int main()

{

    int a, b;

    printf("Digite dois números: ");

    scanf("%d %d", &a, &b);

    calcularMenor(a, b);
}

int calcularMenor(int a, int b)
{

    if (a < b)
    {

        printf("%d é o menor!", a);
    }
    else
    {

        printf("%d é o menor!", b);
    }
}