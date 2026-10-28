/*
Nome do problema: Pedra, Papel, Tesoura, Lagarto, Spock!
*/
#include <stdio.h>

int game(int n)
{
    if(n == 0) return 0;

    int k, y;

    scanf("%d%d", &y, &k);

    int kaio_vence = (k + 1) % 5 == y || (k + 2) % 5 == y;

    return kaio_vence + game(n - 1);
}

int main()
{
    int n;
    
    scanf("%d", &n);

    int vitorias_k = game(n);
    int vitorias_y = n - vitorias_k;

    if(vitorias_k < vitorias_y)
        printf("Kaio foi o perdedor.\n");
    else
        printf("Yuri foi o perdedor.\n");

    return 0;
}