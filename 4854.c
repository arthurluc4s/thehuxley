/*
Nome do problema: A Batalha de Nairim
*/
#include <stdio.h>

int main()
{
    int d, v, n;
    char w, t;

    scanf("%d %c %c%d%d", &d, &w, &t, &n, &v);

    double dano_final = d;

    //Sobre as armas
    switch(w) {
        case 'A':
            dano_final *= 0.8;
            break;
        case 'M':
            dano_final *= 1.5;
            break;
    }
    //Sobre o terreno
    switch(t) {
        case 'F':
            dano_final *= 1.2;
            break;
        case 'M':
            dano_final *= 0.9;
            break;
    }
    //Sobre a experiência da heroína
    if(n >= 10)
        dano_final *= 1.3;
    else if(n >= 5)
        dano_final *= 1.1;
    
    printf("%.2lf\n", dano_final);

    if(dano_final >= v)
        printf("O monstro foi derrotado!\n");
    else
        printf("O monstro sobreviveu!\n");

    return 0;
}