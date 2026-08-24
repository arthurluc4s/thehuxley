/*
Nome do problema: Múltiplos de N num Intervalo
*/
#include <stdio.h>

void imprime_multiplos(int n, int a, int b, int inex)
{
    if (a > b) {
        if(inex)
            printf("INEXISTENTE\n");
        return;
    }

    if(a % n == 0) {
        printf("%d\n", a);
        inex = 0;
    }

    imprime_multiplos(n, a + 1, b, inex);
}

int main()
{
    int n, a, b;

    scanf("%d%d%d", &n, &a, &b);

    imprime_multiplos(n, a, b, 1);

    return 0;
}