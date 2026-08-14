/*
Fatorial
*/
#include <stdio.h>

int fat(int n)
{
    if(n <= 1) return 1;

    return n * fat(n - 1);
}

void ler_valores(int n)
{
    if(n == -1) return;
    
    printf("%d\n", fat(n));
    
    scanf("%d", &n);
    
    ler_valores(n);
}

int main() {
    int n;

    scanf("%d", &n);

    ler_valores(n);
    
    return 0;
}