/*
Nome do problema: Caminho de Volta
*/

#include <stdio.h>

void vai(int i, int k, int n)
{
    if(i > n || i > k) return;
    printf("Indo, posicao %d\n", i);
    vai(i+1, k, n);
}
void vem(int i)
{
    if(i < 0) return;
    printf("Voltando, posicao %d\n", i);
    vem(i - 1);
}
void loop(int n, int k, int dist)
{
    if(k == 0) {
        vai(1, n, n);
        printf("Destino alcancado, distancia percorrida: %d\n", dist + n);
        return;
    }

    int esqueceu;

    scanf("%d", &esqueceu);

    vai(1, esqueceu, n);
    vem(esqueceu - 1);

    dist += 2 * esqueceu;

    loop(n, k - 1, dist);
}

int main()
{
    int n, k;
    
    scanf("%d%d", &n, &k);

    loop(n, k, 0);

    return 0;
}