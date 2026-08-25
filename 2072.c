/*
Nome do problema: A muralha infinita
*/
#include <stdio.h>

int conta_moedas(int n, int x, int y, int moedas, 
                int regiao_anterior)
{
    if(n == 0) return moedas;

    char mov;
    scanf(" %c", &mov);

    //Se movimenta;
    switch (mov) {
        case 'D':
            x++;
            break;
    
        case 'C':
            y++;
            break;
    }

    //Está embaixo
    if(x > y) {
        //Estava em cima
        if(regiao_anterior == 1) {
            moedas++;
        }
        regiao_anterior = -1;
    } 
    //Está em cima
    else if(y > x) {
        //Estava embaixo
        if(regiao_anterior == -1) {
            moedas++;
        }
        regiao_anterior = 1;
    }

    return conta_moedas(n-1, x, y, moedas, regiao_anterior);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", conta_moedas(n, 0, 0, 0, 0));
    
    return 0;
}