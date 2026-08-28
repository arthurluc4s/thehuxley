/*
Nome do problema: Neymar no Santos
*/

#include <stdio.h>

int main()
{
    long long int p, r, g, x;

    scanf("%lld%lld%lld%lld", &p, &r, &g, &x);

    long long int max = r * p;

    long long int neymar = x * g * p;

    if(neymar > max)
        printf("%lld\n", max);
    else
        printf("%lld\n", neymar);


    return 0;
}