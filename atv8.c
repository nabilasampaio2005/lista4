#include <stdio.h>

int calcularMenor(int a, int b, int c);

int main()

{

    int a, b, c;

    printf("Digite três números: ");

    scanf("%d %d %d", &a, &b, &c);

    calcularMenor(a, b, c);
}

int calcularMenor(int a, int b, int c)
{

    if (a < b && a < c)
    {

        printf("%d é o menor!", a);
    }
    else if (b < c)
    {

        printf("%d é o menor!", b);
    }
    else
    {

        printf("%d é o menor!", c);
    }
}