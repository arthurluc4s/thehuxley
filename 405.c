/*
Contando os Dígitos Pares
*/
#include <stdio.h>

int eh_par(int n)
{
    return n % 2 == 0;
}

int contaDigitosPares(int n)
{
    if(n < 10) 
        return eh_par(n);
    
    return eh_par(n % 10) + contaDigitosPares(n / 10);
}

int main() {
    int n;

    scanf("%d", &n);
    
    printf("%d\n", contaDigitosPares(n));
    
    return 0;
}