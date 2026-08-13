/*
Nome do problema: Preço da roupa
*/
#include <stdio.h>

int main() {
    float custo;
    char tam, tipo;

    scanf("%f %c %c", &custo, &tam, &tipo);

    float valor_tam;
    switch(tam) {
        case 'P':
            valor_tam = 2.75;
            break;
        case 'M':
            valor_tam = 3.66;
            break;
        default:
            valor_tam = 5.17;
            break;
    }

    float valor_tipo;
    switch(tipo) {
        case 'B':
            valor_tipo = 3.82;
            break;
        case 'C':
            valor_tipo = 4.55;
            break;
        default:
            valor_tipo = 7.12;
            break;
    }

    float valor = (custo * valor_tam + custo * valor_tipo) / 2;

    printf("%.2f R$\n", valor);

    return 0;

}