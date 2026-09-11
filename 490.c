/*
Nome do problema: Árvore de Natal*/
#include <stdio.h>

float total;

void ler_enfeites(int n, int i)
{
    if(i == n) return;

    int qtd;
    float valor;

    scanf("%d %f", &qtd, &valor);

    total += qtd * valor;

    ler_enfeites(n, i + 1);
}

int main()
{
    int n = 3;

    scanf("%f", &total);

    ler_enfeites(n, 0);

    printf("%.2f\n%.2f\n", total, total / 21);

    return 0;
}