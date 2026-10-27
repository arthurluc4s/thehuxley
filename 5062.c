/*
Nome do problema: Raphael cantor
*/
#include <stdio.h>

int loop(int n, int ano)
{
    if(n == 0) return 0;

    int a, t;

    scanf("%d%d", &a, &t);

    if(ano != t - a) return 1;

    return loop(n - 1, ano);
}

int main()
{
    int n, a, t;

    scanf("%d%d%d", &n, &a, &t);

    int mentiu = loop(n - 1, t - a);

    if(mentiu)
        printf("mentiu a idade\n");
    else
        printf("idades corretas\n");

    return 0;
}