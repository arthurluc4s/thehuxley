/*
Nome do problema: Fazenda de Oileh
*/
#include <stdio.h>

int main()
{
    int t;
    double x, z, w;
    char y;
    
    scanf("%lf %c%lf%lf%d", &x, &y, &z, &w, &t);
    
    double efeito = x;

    //1. Fase da Lua
    switch(y) {
        case 'C':
            efeito *= 1.5;
            break;
        case 'F':
            efeito *= 1.2;
            break;
        default:
            efeito *= 0.9;
            break;
    }
    //2. Hidratação das Plantas
    if(w / z >= 2.0)
        efeito *= 1.3;
    else
        efeito *= 0.75;

    //3. Temperatura Ambiente
    if(t < 10)
        efeito *= 0.85;
    else if(t > 25)
        efeito *= 1.25;

    printf("%.2lf\n", efeito);
    if(efeito > z)
        printf("Oh nao, a fazenda cresceu demais!\n");
    
    return 0;
}