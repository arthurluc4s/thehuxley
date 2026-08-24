/*
Nome do problema: Divisível por 3
*/
#include <stdio.h>

int conta_multiplos(int i, int n)
{
    if(i > n) return 0;

    int eh_divisor = (n % i == 0) && (i % 3 == 0);

    return eh_divisor + conta_multiplos(i+1, n);
}

int main()
{
    int n;

    scanf("%d", &n);

    int r = conta_multiplos(1, n);

    if(r)
        printf("%d\n", r);
    else
        printf("O numero nao possui divisores multiplos de 3!\n");
    
    return 0;
}