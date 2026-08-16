/*
Nome do problema: Duelo condicional
*/
#include <stdio.h>

int main() {
    int lvl, lvl_eny;
    double ad, hp_eny;

    scanf("%d%lf%d%lf",&lvl, &ad, &lvl_eny, &hp_eny);

    //Bonificação do p1
    if(lvl >= 1 && lvl <= 5) ad *= 1.2;
    else if((lvl <= 10)) ad *= 1.5;
    else if(lvl <= 15) ad *= 1.8;
    else if(lvl <= 20) ad *= 2.0;

    //Bonificação do p2
    if(lvl_eny >= 1 && lvl_eny <= 5) hp_eny *= 1.2;
    else if((lvl_eny <= 10)) hp_eny *= 1.5;
    else if(lvl_eny <= 15) hp_eny *= 1.8;
    else if(lvl_eny <= 20) hp_eny *= 2.0;

    //Duelo
    hp_eny -= ad;

    if(lvl < 1 || lvl_eny < 1)
        printf("Nivel abaixo\n");
    else if(lvl > 20 || lvl_eny > 20)
        printf("Nivel acima\n");
    else if(hp_eny <= 0) {
        printf("Personagem 1 venceu\n");
        printf("Dano causado: %.2lf\n", ad);
    } else {
        printf("Personagem 2 venceu\n");
        printf("Vida restante: %.2lf\n", hp_eny);
    }

    return 0;
}