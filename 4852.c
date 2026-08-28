/*
Nome do problema: O Grande Torneio de Chefs
*/
#include <stdio.h>

int main()
{
    int p, n, m;
    char t, i;

    scanf("%d %c %c%d%d", &p, &t, &i, &n, &m);

    double pontuacao = p;

    //1. Sobre a técnica de preparo
    switch(t) {
        case 'R':
            pontuacao *= 0.85;
            break;
        case 'S':
            pontuacao *= 1.4;
            break;
    }
    //2. Sobre os ingredientes principais
    switch(i) {
        case 'F':
            pontuacao *= 1.25;
            break;
    
        case 'E':
            pontuacao *= 0.8;
            break;
        case 'I':
            pontuacao *= 1.5;
            break;
    }
    //3. Sobre a experiência do chef
    if(n >= 10)
        pontuacao *= 1.35;
    else if(n >= 5)
        pontuacao *= 1.15;

    printf("%.2f\n", pontuacao);
    if(pontuacao >= m)
        printf("Marcos venceu a rodada!\n");
    else
        printf("Marcos foi eliminado!\n");

    
    return 0;
}