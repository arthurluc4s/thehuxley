/*
Nome do problema: Árvore de Natal
*/
#include <stdio.h>

int main()
{
    int h;

    scanf("%d", &h);

    int c = h * 2;

    for(int i = 1; i <= h; i++) {
        int qtd_x = i * 2;

        int qtd_esp = (c - qtd_x) / 2;

        for(int j = 1; j <= qtd_esp; j++)
            printf(" ");

        for(int k = 1; k <= qtd_x; k++)
            printf("X");

        printf("\n");
    }

    for(int i = 1; i <= h / 2; i++) {
        for(int j = 1; j <= (c - 2) / 2; j++)
            printf(" ");
            
        printf("XX\n");
    }

    return 0;
}