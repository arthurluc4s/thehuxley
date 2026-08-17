/*
Algoritmo de Euclides
*/

#include <stdio.h>

int euclides(int a, int b)
{
    if(b == 0) return a;

    return euclides(b, a % b);
}

void loop(int n)
{
    if(n <= 0) return;
    
    loop(n-1);
    
    int a, b;

    scanf("%d%d", &a, &b);

    printf("MDC(%d,%d) = %d\n", a, b, euclides(a, b));
}

int main() {
    int n;

    scanf("%d", &n);

    loop(n);
    
    return 0;
}