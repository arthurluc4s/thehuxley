/*
Nome do problema: Foto de Família
*/
#include <stdio.h>

void ler_alturas(float h[], int n, int i)
{
    if(i == n) return;

    scanf("%f", &h[i]);

    ler_alturas(h, n, i + 1);
}

void imprime_alturas(float h[], int n, int i)
{
    if(i == n) return;

    printf("%.2f\n", h[i]);

    imprime_alturas(h, n, i + 1);
}

void move_maior(float h[], int n, int i)
{
    if(i == n - 1) return;

    if(h[i] > h[i + 1]) {
        float aux = h[i];
        h[i] = h[i + 1];
        h[i + 1] = aux;
    }

    move_maior(h, n, i + 1);
}

void ordem_crescente(float h[], int n, int i)
{
    if(i == n - 1) return;

    move_maior(h, n - i, 0);

    ordem_crescente(h, n, i + 1);
}

int main()
{
    int n = 4;

    float altura[n];

    ler_alturas(altura, n, 0);

    ordem_crescente(altura, n, 0);

    float aux = altura[3];
    altura[3] = altura[1];
    altura[1] = altura[2];
    altura[2] = aux;

    imprime_alturas(altura, n, 0);

    return 0;
}
