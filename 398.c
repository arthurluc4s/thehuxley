/*
Nome do problema: Conta Múltiplos
*/
#include <stdio.h>

int conta_multiplos(int a, int b, int n)
{
    if (n < b) 
        return 0;

    if(n % a == 0 && n % b == 0)
        return 1 + conta_multiplos(a, b, n - 1);
    else
        return conta_multiplos(a, b, n - 1);
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    if(a > b) {
        int aux = a;
        a = b;
        b = aux;
    }

    printf("%d\n", conta_multiplos(a, b, 49));

    return 0;
}