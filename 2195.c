/*
Copa de Ambrolândia
*/

#include <stdio.h>

int main() {
    char n, s;
    int i;
    double vi;

    scanf(" %c%d %c%lf", &n, &i, &s, &vi);

    double desconto = (s == 'F') ? 0.9 : 1;

    if(0 >= i || i > 120)
        printf("idade invalida!\n");
    else if(n == 'F' || n == 'C' && i < 21)
        printf("nao pode comprar\n");
    else {
        if(n == 'B') {
            desconto = 0.5;
        } else if(n == 'A' && (i < 18 || s == 'F')) {
            desconto = 0.8;
        } else if((n == 'F' || n == 'C') && i >= 21) {
            desconto = 0.7;
        } else if(n == 'I' || n == 'R') {
            desconto = (i < 16) ? 0.6 : 0.7;
        }

        printf("R$ %.2lf\n", vi * desconto);
    }
    
    return 0;
}