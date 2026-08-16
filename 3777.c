/*
Nome do problema: Sistema de Ingressos
*/
#include <stdio.h>

int main() {
    int dia, eh_estudante, eh_socio;
    
    scanf("%d%d%d", &dia, &eh_estudante, &eh_socio);

    double valor_ingresso = (dia >= 1 && dia <= 4) ? 15.0 : 30.0;

    if(eh_socio) {
        valor_ingresso *= (dia > 4) ? 0.8 : 1;
        printf("SOCIO: R$ %.2lf\n", valor_ingresso);
    } else if(eh_estudante) {
        valor_ingresso *= 0.7;
        printf("ESTUDANTE: R$ %.2lf\n", valor_ingresso);
    } else {
        printf("COMUM: R$ %.2lf\n", valor_ingresso);
    }

    return 0;
}