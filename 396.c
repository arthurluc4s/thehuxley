/*
Nome do problema: Abaixo a poluição
*/
#include <stdio.h>

void solve(float t, int q)
{
    int veiculos;

    scanf("%d", &veiculos);

    if(veiculos == 999) {
        printf("%.2f\n%d\n", t, q);
        return;
    }

    if(veiculos > 2) {
        t += (veiculos - 2) * 12.89;
        q++;
    }

    solve(t, q);
}

int main()
{
    solve(0, 0);
  
    return 0;
}