/*
Nome do problema: Batalha Pokemon
*/
#include <stdio.h>

int vencedor(int v1, int v2, int d1, int d2)
{
    //Clodes ataca Bezaliel
    int turnos_clodes = (v2 % d1 == 0) ? v2 / d1 : v2 / d1 + 1;
    int turnos_bezaliel = (v1 % d2 == 0) ? v1 / d2 : v1 / d2 + 1;

    if(turnos_clodes <= turnos_bezaliel) return 1;
    
    //Bezaliel ataca Clodes
    v1 -= d2;
    
    if(v1 <= 0) return 2;

    return vencedor(v1, v2, d1 + 50, d2);
}

void loop(int n)
{
    if(n == 0) return;
    
    int v1, v2, d1, d2;

    scanf("%d%d%d%d", &v1, &v2, &d1, &d2);

    int v = vencedor(v1, v2, d1, d2);

    if(v == 1)
        printf("Clodes\n");
    else
        printf("Bezaliel\n");
    

    loop(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    loop(n);

    return 0;
}