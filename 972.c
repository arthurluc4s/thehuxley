/*
Nome do problema: É um número primo? (versão iniciante)
*/
#include <stdio.h>

int eh_primo(int i, int n)
{
    if(n == 2) return 1;

    if(n <= 1 || n % 2 == 0) return 0;

    if(i * i > n) return 1;
    
    if(n % i == 0) return 0;

    return eh_primo(i + 2, n);
}

void loop(int n)
{
    scanf("%d", &n);

    if(n == -1) return;

    printf("%d\n", eh_primo(3, n) );

    loop(n);
}

int main()
{
    int n;

    loop(n);

    return 0;
}