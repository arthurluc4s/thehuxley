/*
Duelo no RU
*/
#include <stdio.h>

//Pedro
int p_class1, p_class2, p_class3;
double p_ataque1, p_ataque2, p_ataque3;
double p_vida1, p_vida2, p_vida3;

//Tulio
int t_class1, t_class2, t_class3;
double t_ataque1, t_ataque2, t_ataque3;
double t_vida1, t_vida2, t_vida3;

int p_class, t_class;
double p_ataque, t_ataque;
double p_vida, t_vida;

void def_var_rodada(int n) 
{
    if(n == 1) {
        p_class = p_class1;
        p_ataque = p_ataque1;
        p_vida = p_vida1;
        t_class = t_class1;
        t_ataque = t_ataque1;
        t_vida = t_vida1;
    } else if (n == 2) {
        p_class = p_class2;
        p_ataque = p_ataque2;
        p_vida = p_vida2;
        t_class = t_class2;
        t_ataque = t_ataque2;
        t_vida = t_vida2;
    } else {
        p_class = p_class3;
        p_ataque = p_ataque3;
        p_vida = p_vida3;
        t_class = t_class3;
        t_ataque = t_ataque3;
        t_vida = t_vida3;
    }
}

void aplicar_bonus()
{
    if(p_class == 1 && t_class == 3)
        p_vida *= 1.3;
    else if(p_class == 3 && t_class == 1)
        t_vida *= 1.3;
    else if(p_class == 3 && t_class == 2)
        p_ataque *= 1.25;
    else if(p_class == 2 && t_class == 3)
        t_ataque *= 1.25;
    else if(p_class == 2 && t_class == 1) {
        p_ataque *= 1.15;
        p_vida *= 1.15;
    } else if(p_class == 1 && t_class == 2) {
        t_ataque *= 1.15;
        t_vida *= 1.15;
    }
}

char duelo()
{
    if(p_vida <= t_vida) {
        
        t_vida -= p_ataque;

        if(t_vida > 0)
            p_vida -= t_ataque;
    }
    else {
        
        p_vida -= t_ataque;

        if(p_vida > 0)
            t_vida -= p_ataque;
    }

    if(p_vida > t_vida)
        return 'p';
    else if(t_vida > p_vida)
        return 't';
    else if(p_ataque > t_ataque)
        return 'p';
    else
        return 't';
    
}

int main() {
    //Pedro
    scanf("%d%lf%lf", &p_class1, &p_ataque1, &p_vida1);
    scanf("%d%lf%lf", &p_class2, &p_ataque2, &p_vida2);
    scanf("%d%lf%lf", &p_class3, &p_ataque3, &p_vida3);

    //Tulio
    scanf("%d%lf%lf", &t_class1, &t_ataque1, &t_vida1);
    scanf("%d%lf%lf", &t_class2, &t_ataque2, &t_vida2);
    scanf("%d%lf%lf", &t_class3, &t_ataque3, &t_vida3);

    int p_placar = 0;
    int t_placar = 0;
    char vencedor;


    //Duelo 1
    def_var_rodada(1);

    aplicar_bonus();

    vencedor = duelo();

    p_placar += vencedor == 'p' ? 1 : 0;
    t_placar += vencedor == 't' ? 1 : 0;

    printf("Rodada1: %s\n", vencedor == 'p' ? "Pedro" : "Tulio");

    //Duelo 2
    def_var_rodada(2);

    aplicar_bonus();

    vencedor = duelo();
    p_placar += vencedor == 'p' ? 1 : 0;
    t_placar += vencedor == 't' ? 1 : 0;

    printf("Rodada2: %s\n", vencedor == 'p' ? "Pedro" : "Tulio");

    //Duelo 3
    def_var_rodada(3);

    aplicar_bonus();

    vencedor = duelo();
    p_placar += vencedor == 'p' ? 1 : 0;
    t_placar += vencedor == 't' ? 1 : 0;

    printf("Rodada3: %s\n", vencedor == 'p' ? "Pedro" : "Tulio");

    //Placar geral
    printf("%s vitorioso\n", p_placar > t_placar ? "Pedro" : "Tulio");

    return 0;
}