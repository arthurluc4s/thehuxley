/*
Nome do problema: Recanto Lenhoso em Perigo!
*/
#include <stdio.h>

int dez(int n)
{
    switch(n) {
        case 2:
            return 10*10;
        case 3:
            return 10*10*10;
        case 4:
            return 10*10*10*10;
    }

    return -1;
}

int intervalo(int n) {
    if(0 <= n && n <= 9) return 1;

    return 0;
}

int err(int a1, int a2, int a3, int a4, int a5)
{
    if( !intervalo(a1) || !intervalo(a2) || 
        !intervalo(a3) || !intervalo(a4) || !intervalo(a5) ) {

        return 1;
    }

    return 0;
}

int main()
{
    int a1, a2, a3, a4, a5;
    scanf("%d%d%d%d%d", &a5, &a4, &a3, &a2, &a1);

    if(err(a1, a2, a3, a4, a5)) {
        printf("Feldspato, foi um erro de leitura\n");
        return 0;
    }

    int s = (a5*dez(4) + a4*dez(3) + a3*dez(2)+ a2*10 + a1);

    int palindromo = (a1 == a5 && a2 == a4);

    if(palindromo) {
        printf("Feldspato, de um esporro no Gabro por mim\n");
    } else if(s % 2 == 0 && s % 7 != 0) {
        printf("Feldspato, va para Gemeo Calido\n");
    } else if(s % 7 == 0 && s % 2 != 0) {
        printf("Feldspato, va para Gemeo Cinzento\n");
    } else if(50000 <= s && s <= 99999) {
        printf("Feldspato, va para Vale Incerto\n");
    } else if(100 <= s && s <= 49999) {
        printf("Feldspato, va para Profundezas do Gigante\n");
    } else if(0 < s && s < 3) {
        printf("Feldspato, va para Abrolho Sombrio\n");
    } else {
        printf("Feldspato, foi um erro de leitura\n");
    }

    return 0;
}