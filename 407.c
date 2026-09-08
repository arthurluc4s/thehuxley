/*
Nome do problema: 3n +1
*/
#include <stdio.h>

int tam_ciclo(long long n)
{
    if(n == 1) return 1;

    if(n % 2 == 0)
        return 1 + tam_ciclo(n / 2);
    else
        return 1 + tam_ciclo(3 * n + 1);
}
int max_tam_ciclo(int i, int j, int max)
{
    if(i > j) return max;

    int tc = tam_ciclo(i);

    if(tc > max) max = tc;

    return max_tam_ciclo(i+1, j, max);
}

void solve()
{
    int i, j;

    if(scanf("%d %d", &i, &j) != 2) return;

    int inicio = (i < j) ? i : j;
    int fim = (i < j) ? j : i;
    
    int m = max_tam_ciclo(inicio, fim, 0);

    printf("%d %d %d\n", i, j, m);

    solve();
}

int main()
{
    solve();

    return 0;
}