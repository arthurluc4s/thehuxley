/*
Nome do problema: O Salto do Amor
*/
#include <stdio.h>

int sum_digits(int n)
{
    if(n < 10) return n;

    return n % 10 + sum_digits(n / 10);
}

int eh_primo(int i, int n)
{
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    if(i * i > n) return 1;
    if(n % i == 0) return 0;

    return eh_primo(i + 2, n);
}

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int eh_fibonacci(int i, int t)
{
    int f = fibonacci(i);

    if(f == t) return 1;
    if(f > t) return 0;
    
    return eh_fibonacci(i + 1, t);
}

int atravessou(int sapato, int n)
{
    if(n == 0) return 1;

    int t;
    
    scanf("%d", &t);

    switch(sapato) {
        case 1:
            if(!eh_fibonacci(0, t)) return 0;
            break;
        case 2:
            if(!eh_primo(3, t)) return 0;
            break;
        default:
            if(sum_digits(t) % 2 != 0) return 0;
            break;
    }

    return atravessou(sapato, n - 1);
}

int main()
{
    int sapato, troncos;

    scanf("%d%d", &sapato, &troncos);

    if(atravessou(sapato, troncos)) printf("Muack!\n");
    else printf("Nhac!\n");

    return 0;
}