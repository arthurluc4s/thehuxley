/*
Nome do problema: Cálculo de Série
*/
#include <stdio.h>
#include <math.h>

float serie(int n)
{
    if(n == 0) return 0;

    if(n % 2 == 0)
        return pow(2, n-1) / (3 * n / 2) + serie(n - 1);
    else
        return n / pow(2, n-1) + serie(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("S: %.2f\n", serie(n));
    
    return 0;
}