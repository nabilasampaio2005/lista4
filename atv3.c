#include <stdio.h>

int calcularDelta(int a, int b, int c);

int main()

{

    int a, b, c, delta;

    printf("Digite três números: ");

    scanf("%d %d %d", &a, &b, &c);

    delta = calcularDelta(a, b, c);

    printf("Delta: %d\n", delta);
}

int calcularDelta(int a, int b, int c)
{

    int delta;

    delta = (b * b) - 4 * a * c;

    return delta;
}

