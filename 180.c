/*
Nome do problema: Elevador
*/
#include <stdio.h>

char capacidade_excedida(int n, int c, int saldo)
{
    if(n < 1)
        return  'N';

    int s, e;

    scanf("%d%d", &s, &e);

    saldo = saldo - s + e;

    if(saldo > c)
        return 'S';

    return capacidade_excedida(n -1, c, saldo);
}

int main()
{
    int n, c;

    scanf("%d%d", &n, &c);

    printf("%c\n", capacidade_excedida(n, c, 0));
    
    return 0;
}