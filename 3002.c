/*
Acampamento
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int dois = 0;

    if( abs(a - b) == 1 || 
        abs(a - c) == 1 || 
        abs(a - d) == 1 || 
        abs(a - e) == 1 || 
        abs(b - c) == 1 ||
        abs(b - d) == 1 ||
        abs(b - e) == 1 ||
        abs(c - d) == 1 ||
        abs(c - e) == 1 ||
        abs(d - e) == 1)
        
        printf("2\n");
    else 
        printf("1\n");

    return 0;
}