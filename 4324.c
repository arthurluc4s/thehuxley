/*
Nome do problema: Nerdolas do RU
*/
#include <stdio.h>

int a, b, c, d, e;
int i, j, k, l, m;

int valor_letra(char letra)
{
    switch(letra) {
        case 'a':
            return a;
        case 'b':
            return b;
        case 'c':
            return c;
        case 'd':
            return d;
        case 'e':
            return e;
        case 'i':
            return i;
        case 'j':
            return j;
        case 'k':
            return k;
        case 'l':
            return l;
        case 'm':
            return m;
        }
}

int main()
{
    char ryan1, filipe1, ruan1, heron1;
    char ryan2, filipe2, ruan2, heron2;

    scanf(" %c %c %c %c", &ryan1, &filipe1, &ruan1, &heron1);
    scanf(" %c %c %c %c", &ryan2, &filipe2, &ruan2, &heron2);
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    scanf("%d%d%d%d%d", &i, &j, &k, &l, &m);

    int p_ryan = (valor_letra(ryan1) * valor_letra(ryan2)) % 100;
    int p_filipe = (valor_letra(filipe1) * valor_letra(filipe2)) % 100;
    int p_ruan = (valor_letra(ruan1) * valor_letra(ruan2)) % 100;
    int p_heron = (valor_letra(heron1) * valor_letra(heron2)) % 100;

    if(p_ryan > p_filipe && p_ryan > p_ruan && p_ryan > p_heron)
        printf("Ryan %d - Vencedor\n", p_ryan);
    else if(p_filipe > p_ryan && p_filipe > p_ruan && p_filipe > p_heron)
        printf("Filipe %d - Vencedor\n", p_filipe);
    else if(p_ruan > p_ryan && p_ruan > p_filipe && p_ruan > p_heron)
        printf("Ruan %d - Vencedor\n", p_ruan);
    else
        printf("Heron %d - Vencedor\n", p_heron);

    if(p_ryan < p_filipe && p_ryan < p_ruan && p_ryan < p_heron)
        printf("Ryan %d - Perdedor\n", p_ryan);
    else if(p_filipe < p_ryan && p_filipe < p_ruan && p_filipe < p_heron)
        printf("Filipe %d - Perdedor\n", p_filipe);
    else if(p_ruan < p_ryan && p_ruan < p_filipe && p_ruan < p_heron)
        printf("Ruan %d - Perdedor\n", p_ruan);
    else
        printf("Heron %d - Perdedor\n", p_heron);

    return 0;
}