/*
Nome do problema: É um número triangular?
*/
#include <stdio.h>

void solve(int n, int i)
{
    int triangular = i * (i + 1) * (i + 2);

    if(triangular == n) {
        printf("%d * %d * %d = %d\n", i, i + 1, i + 2, triangular);
        printf("Verdadeiro\n");
        return;
    }
    if(triangular > n) {
        printf("Falso\n");
        return;
    }

    solve(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    solve(n, 1);

    return 0;
}