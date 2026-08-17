/*
Nome do problema: Casa de Show
*/
#include <stdio.h>

int pe, t, g, y, pa, v, e;

int conta_integrantes(  int pe_casa, int t_casa,
                        int g_casa, int y_casa,
                        int pa_casa, int v_casa,
                        int e_casa )
{

    int pe_andou = 7400 + pe_casa;
    int t_andou = 4400 + t_casa;
    int g_andou = 5200 + g_casa;
    int y_andou = 4000 + y_casa;
    int pa_andou = 4400 + pa_casa;
    int v_andou = 4800 + v_casa;
    int e_andou = 6600 + e_casa;

    int integrantes = 7;

    if(pe - pe_andou < 0) integrantes--;
    if(t - t_andou < 0) integrantes--;
    if(g - g_andou < 0) integrantes--;
    if(y - y_andou < 0) integrantes--;
    if(pa - pa_andou < 0) integrantes--;
    if(v - v_andou < 0) integrantes--;
    if(e - e_andou < 0) integrantes--;

    return integrantes;
}
int escolhe_casa(int a, int b, int c) {
    if(a >= b && a >= c)
        return 1;
    else if(b >= a && b >= c)
        return 2;
    else
        return 3;
}

int main() {

    scanf("%d%d%d%d%d%d%d", &pe, &t, &g, &y, &pa, &v, &e);
   
    int c1_integrantes = conta_integrantes(1000, 400, 400, 400, 400, 800, 1000);
    int c2_integrantes = conta_integrantes(200, 800, 1200, 800, 1200, 1200, 1800);
    int c3_integrantes = conta_integrantes(1000, 1600, 2000, 1200, 1200, 800, 1000);  

    if(c1_integrantes == 0 && c2_integrantes == 0 && c3_integrantes == 0) {
        printf("NAO TERA SHOW!\n");
    } else {

        int c1_paga = 10 * c1_integrantes;
        int c2_paga = 20 * c2_integrantes;
        int c3_paga = 30 * c3_integrantes;

        int casa_apresentacao;

        if(c1_paga == c2_paga && c2_paga == c3_paga) {
            casa_apresentacao = escolhe_casa(c1_integrantes, c2_integrantes, c3_integrantes);
        } else if(c1_paga == c2_paga && c1_paga > c3_paga) {
            casa_apresentacao = (c1_integrantes >= c2_integrantes) ? 1 : 2;
        } else if(c2_paga == c3_paga && c2_paga > c1_paga) {
            casa_apresentacao = (c2_integrantes >= c3_integrantes) ? 2 : 3;
        } else if(c1_paga == c3_paga && c1_paga > c2_paga) {
            casa_apresentacao = (c1_integrantes >= c3_integrantes) ? 1 : 3;
        } else {
            casa_apresentacao = escolhe_casa(c1_paga, c2_paga, c3_paga);
        }

        printf("CASA %d\n", casa_apresentacao);
        
        int acumulado;
        int integrantes;

        if(casa_apresentacao == 1) {
            acumulado = c1_paga;
            integrantes = c1_integrantes;
        } else if(casa_apresentacao == 2) {
            acumulado = c2_paga;
            integrantes = c2_integrantes;
        } else {
            acumulado = c3_paga;
            integrantes = c3_integrantes;
        }

        printf("%d\n",acumulado);

        printf("%d\n", integrantes);
    }

    return 0;
}