/*
Nome do problema: Conversor de IP
*/
#include <stdio.h>
#include <math.h>

int bits(int n)
{
    if(n == 0) return 0;

    int b;

    scanf("%d", &b);

    return b * pow(2, n - 1) + bits(n - 1);
}

void loop(int i, int n)
{
    if(i > n) return;

    printf("%d%c", bits(8), (i == n) ? '\n' : '.');

    loop(i + 1, n);
}

int main()
{
    int linhas = 4;

    loop(1, linhas);

    return 0;
}