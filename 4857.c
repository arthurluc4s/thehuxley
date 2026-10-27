/*
A Mensagem dos Confins do Universo
*/
#include <stdio.h>
#include <stdlib.h>

int serie(int t, int n)
{
    if(t > n) return 0;
    
    int valor = (t * t) * -1;
    if(t % 3 == 1) valor = t;
    else if(t % 3 == 2) valor = t * (t + 1);
    
    return valor + serie(t + 1, n);
}

void loop(int n)
{
    if(n == 0) return;

    int num;

    scanf("%d", &num);

    int s = 65 + abs(serie(1, num));

    printf(n == 1 ? "%c\n" : "%c", s);

    loop(n - 1);

}
int main()
{
    int n;

    scanf("%d", &n);

    loop(n);

    return 0;
}