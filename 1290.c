/*
Nome do problema: L5Q2 - Rickception
*/
#include <stdio.h>

int termo(int n, int t)
{
    if(t == 0) return n;

    int anterior = termo(n, t - 1);

    if(t % 2 == 0) 
        return anterior + (anterior % 5);
    else
        return anterior + 3;
}

int main()
{
    int n, t;

    scanf("%d%d", &n, &t);
    
    printf("%d\n", termo(n, t));

    return 0;
}