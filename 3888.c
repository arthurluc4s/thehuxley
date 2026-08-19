/*
Nome do problema: Em Busca dos Trintão
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int a_pts, p_pts, t_pts, w_pts;
double a_n, p_n, t_n, w_n;
double a_rod, p_rod, t_rod, w_rod;
char camp;

double fator(int p)
{
    if(0 <= p && p <= 20)
        return 0.2;
    if(p <= 40)
        return 0.4;
    if(p <= 60)
        return 0.6;
    if(p <= 80)
        return 0.8;
    else
        return 1.0;
}

char ganhador(double m, double d1,
            double d2, double d3, double d4)
{
    if(d1 < d2 && d1 < d3 && d1 < d4) {
        
        if(camp == 'a') 
            a_rod = fator(a_pts) * a_pts + 10;
        else 
            a_rod = 10;

        return 'a';
    }
    if(d2 < d1 && d2 < d3 && d2 < d4) {
        if(camp == 'p') 
            p_rod = fator(p_pts) * p_pts + 10;
        else 
            p_rod = 10;

        return 'p';
    }
    if(d3 < d1 && d3 < d2 && d3 < d4) {
        if(camp == 't') 
            t_rod = fator(t_pts) * t_pts + 10;
        else 
            t_rod = 10;

        return 't';
    }
    if(d4 < d1 && d4 < d2 && d4 < d3) {
        if(camp == 'w') 
            w_rod = fator(w_pts) * w_pts + 10;
        else 
            w_rod = 10;

        return 'w';
    }
    return 'x';
}

void imprimir_nome(char c)
{
    switch(c) {
        case 'a':
            printf("Arthur ");
            break;
        case 'p':
            printf("Pedro ");
            break;
        case 't':
            printf("Túlio ");
            break;
        case 'w':
            printf("Will ");
            break;
    }
}

void imprimir_pontuacao(char c)
{
    switch(c) {
            case 'a':
                printf("Pontuação: +%.2lf\n", a_rod);
                break;
            case 'p':
                printf("Pontuação: +%.2lf\n", p_rod);
                break;
            case 't':
                printf("Pontuação: +%.2lf\n", t_rod);
                break;
            case 'w':
                printf("Pontuação: +%.2lf\n", w_rod);
                break;
        }
}

int main() {

    scanf("%d%d%d%d", &a_pts, &p_pts, &t_pts, &w_pts);
    scanf("%lf%lf%lf%lf", &a_n, &p_n, &t_n, &w_n);
    scanf(" %c", &camp);

    double media = ( a_n + p_n + t_n + w_n ) / 4;

    double a_dif2 = pow(a_n - media, 2);
    double p_dif2 = pow(p_n - media, 2);
    double t_dif2 = pow(t_n - media, 2);
    double w_dif2 = pow(w_n - media, 2);

    char novo_camp = ganhador(media, a_dif2, p_dif2, t_dif2, w_dif2);

    if(  a_n <= 0 || a_n >= 100 ||
                p_n <= 0 || p_n >= 100 ||
                t_n <= 0 || t_n >= 100 ||
                w_n <= 0 || w_n >= 100) {

        printf("Números inválidos!\n"); 
        printf("Próxima rodada.\n");

    } else if(novo_camp == 'x') {

        printf("Não foi possível determinar um vencedor :/\n");
        printf("Próxima rodada.\n");

    } else {

        double regular = sqrt(a_dif2 + p_dif2 + t_dif2 + w_dif2);
    
        if(camp == novo_camp) {

            imprimir_nome(novo_camp);

            printf("venceu outra vez!\n");

            imprimir_pontuacao(novo_camp);
            
        } else {
        
            imprimir_nome(novo_camp);

            printf("venceu!\n");

            printf("Pontuação: +10\n");
        }

        if(regular <= 10) {
            printf("Houve regularidade na rodada!\n");
            printf("Todos ganharam +10 pontos\n");
        }

    }

    return 0;
}