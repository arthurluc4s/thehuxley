/*
Nome do problema: Calculadora de Imposto Totais
*/
#include <stdio.h>

int main()
{
    float qdolar, aliquota_icms, valor, frete;

    scanf("%f%f%f%f", &qdolar, &aliquota_icms, &valor, &frete);

    aliquota_icms /= 100;

    int add_frete = (valor >= 2500) ? 0 : 1;

    printf("%.2f\n", qdolar);

    float valor_reais = valor * qdolar;

    printf("%.2f\n", valor_reais);

    float frete_reais = frete * qdolar;

    printf("%.2f\n", frete_reais);

    float valor_total = frete_reais + valor_reais;

    printf("%.2f\n", valor_total);

    float importacao = 0.6 * (valor_reais + (frete_reais * add_frete));

    printf("%.2f\n", importacao);

    double valor_final = (valor_reais + (frete_reais * add_frete) + importacao) / (1 - aliquota_icms);

    double icms = valor_final * aliquota_icms;

    printf("%.2lf\n", icms);

    double impostos = importacao + icms;

    printf("%.2lf\n", impostos);

    printf("%.2lf\n", valor_total + impostos);

    if(add_frete)
        printf("Impostos calculados com o frete\n");
    else
        printf("Impostos calculados sem o frete\n");

    return 0;
}