/*
Nome do problema: Fatorial simples
*/
int fat(int n)
{
    if(n <= 1) return 1;

    return n * fat(n-1);
}
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", fat(n));
    
    return 0;
}