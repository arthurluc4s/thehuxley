/*
Nome do problema: Cápsulas de Café
*/

#include <stdio.h>

int conta_caps(int i, int c)
{
    if(i == 0)
        return c;

    int n;
    char tam;
    
    scanf("%d %c", &n, &tam);

    if(tam == 'p' || tam == 'P')
        c += n * 10;
    else if(tam == 'g' || tam == 'G')
        c += n * 16;
    
    return conta_caps(i-1, c);
}

int main()
{
    int prof = 7;

    int caps = conta_caps(prof, 0);

    int xicaras = caps * 2 / prof;

    printf("%d\n%d\n", caps, xicaras);
    
    return 0;
}