/*
Nome do problema: Preço dos Jogos
*/
#include <stdio.h>

float rules(int dif)
{
    switch(dif) {
        case 0:
            return 0.25;
        case 1:
            return 0.20;
        case 2:
            return 0.18;
        case 3:
            return 0.15;
        case 4:
            return 0.12;
        default:
            return 0.10;
    }
}
float preco_final(int dif, float preco, int t)
{
    if(t == 0) return preco;

    float taxa = (preco <= 100) ? rules(dif) / 2 : rules(dif);

    preco *= (1 - taxa);

    if(preco < 45) return 45;

    return preco_final(dif, preco, t - 1);
}
void calcula_preco(int n)
{
    if(n < 0) return;

    calcula_preco(n - 1);

    int dif;
    int anos = 3;
    float preco;

    scanf("%d%f", &dif, &preco);

    float p = (preco < 45) ? preco : preco_final(dif, preco, anos);

    printf("Jogo[%d] = R$%.2f\n", n, p);
}
int main()
{
    int n;

    scanf("%d", &n);

    calcula_preco(n - 1);

    return 0;
}