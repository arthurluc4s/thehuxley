/*
Nome do problema: O Troco de Ambrósio
*/
#include <stdio.h>

int main()
{
    float conta, pagamento;

    scanf("%f%f", &conta, &pagamento);

    float troco = pagamento - conta;
    printf("Troco: %.2f\n", troco);

    int notas = troco / 20; 
    troco -= notas * 20;
    printf("Notas de 20: %d\n", notas);

    notas = troco / 10; 
    troco -= notas * 10;
    printf("Notas de 10: %d\n", notas);

    notas = troco / 5; 
    troco -= notas * 5;
    printf("Notas de 5: %d\n", notas);

    int moedas = troco;
    troco -= moedas;
    printf("Moedas de 1: %d\n", moedas);

    troco = troco / 0.5;
    moedas = troco;
    printf("Moedas de 0.50: %d\n", moedas);

    return 0;
}