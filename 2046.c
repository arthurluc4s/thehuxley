/*
Nome do problema: Série com funções
*/
#include <stdio.h>

double soma;

int eh_primo_rec(int n, int i)
{
    if(i * i > n)
        return 1;
    
    if(n % i == 0)
        return 0;

    return eh_primo_rec(n, i + 2);
}
int eh_primo(int n)
{
    if(n == 2)
        return 1;
    if(n <= 1 || n % 2 == 0)
        return 0;
    return eh_primo_rec(n, 3);
}
int proximo_primo(int i)
{
    if(eh_primo(i))
        return i;
    return proximo_primo(i + 1);
}
int fatorial(int n)
{
    if(n <= 1)
        return 1;
    return n * fatorial(n-1);
}
void imprime_serie(int i, int n)
{
    if(i > n)
        return;

    int divisor = (i > 2) ? proximo_primo(i) : i;
    printf("%d!/%d", i, divisor);

    soma += fatorial(i) / (double) divisor;

    if(i < n)
        printf(" + ");
    else
        printf("\n");
    

    imprime_serie(i+1, n);
}

int main()
{
    int n;

    scanf("%d", &n);

    imprime_serie(1, n);

    printf("%.2lf\n", soma);

    return 0;
}