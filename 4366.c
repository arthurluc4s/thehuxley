/*
Nome do problema: Rocsoro
*/
#include <stdio.h>

int p, a, h, e;

int sum_digit(int n)
{
    if(n < 10)
        return n;
    return n % 10 + sum_digit(n / 10);
}

void game(int n)
{
    if(n == 0) return;

    int n_p, n_a, n_h;

    scanf("%d%d%d", &n_p, &n_a, &n_h);

    int numero = n_p + n_a + n_h;

    if(numero % 2 == 0)
        numero = sum_digit(n_p) * sum_digit(n_a) * sum_digit(n_h); 
    else
        numero = n_p * n_a * n_h / 2;

    int digit = numero % 10;

    if(digit == 0) e++;
    else if(digit <= 3) p += numero;
    else if(digit <= 6) a += numero;
    else h += numero;

    game(n-1);
}

int main()
{
    int n;

    scanf("%d", &n);

    game(n);

    printf("Pontuacao Pedro: %d\n", p);
    printf("Pontuacao Anderson: %d\n", a);
    printf("Pontuacao Hugo: %d\n", h);
    printf("Empates: %d\n", e);

    if(p > a && p > h)
        printf("Pedro ganhou\n");
    else if(a > p && a > h)
        printf("Anderson ganhou\n");
    else
        printf("Hugo ganhou\n");
    
    return 0;
}