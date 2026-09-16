/*
Nome do problema: Triângulos
*/
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a < b) {
        int aux = a;
        a = b;
        b = aux;
    }
    if(a < c) {
        int aux = a;
        a = c;
        c = aux;
    }

    if(a >= b + c)
        printf("n\n");
    else if(a * a < b * b + c * c)
        printf("a\n");
    else if(a * a == b * b + c * c)
        printf("r\n");
    else
        printf("o\n");


    return 0;
}