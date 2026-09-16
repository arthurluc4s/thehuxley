/*
Nome do problema: Quantos zeros tem no final de um número fatorial
*/
#include<stdio.h>

int conta_zeros(int n, int base)
{
    if(n < base) return 0;

    return n / base + conta_zeros(n, base * 5);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", conta_zeros(n, 5));

    return 0;
}