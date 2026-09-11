/*
Nome do problema: Descontos Black Friday
*/
#include <stdio.h>

int descontos_validos(int n)
{
    if(n == 0) return 0;

    float a, b;

    scanf("%f%f", &a, &b);

    return (b <= a * 0.8) + descontos_validos(n - 1);
}

int main()
{
    int n = 5;

    printf("%d\n", descontos_validos(n));

    return 0;
}