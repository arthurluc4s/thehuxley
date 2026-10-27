/*
Nome do problema: Desafio do Ciclista Sem Fôlego
*/
#include <stdio.h>

void loop(int i, int n)
{
    if(i > n) return;

    char sex;
    int idade;
    double dist;

    scanf(" %c%d%f", &sex, &idade, &dist);

    int meta = 0;

    if(idade <= 29) {
        if(sex == 'M')
            meta = (dist >= idade * 1.4);
        else
            meta = (dist >= idade * 1.2);
    }
    else if(idade < 50) {
        if(sex == 'M')
            meta = (dist >= idade * 1.2);
        else
            meta = (dist >= idade * 1.0);
    }
    else
        if(sex == 'M')
            meta = (dist >= idade * 1.0);
        else
            meta = (dist >= idade * 0.9);

    if(meta) {
        printf("Ciclista %d: Atingiu a meta\n", i);
    }
    else
        printf("Ciclista %d: Nao atingiu a meta\n", i);

    loop(i + 1, n);
}

int main()
{
    int n;
    
    scanf("%d", &n);

    loop(1, n);

    return 0;
}