/*
Nome do problema: Desafio do maior número
*/
#include <stdio.h>

int maior_numero(int m)
{
    int n;

    scanf("%d", &n);

    if(n == 0) 
        return m;
    
    m = (n > m) ? n : m;

    return maior_numero(m);

}

int main()
{
    int m = maior_numero(0);

    printf("%d\n", m);

    return 0;
}