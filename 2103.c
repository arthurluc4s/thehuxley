/*
Nome do problema: L4Q1 - Duelo familiar
*/
#include <stdio.h>

int ler_matriz(int arr[][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(scanf("%d", &arr[i][j]) == EOF)
                return 0;
        }
    }
    return 1;
}
int golpe_valido(int arr[][3])
{
    int principal = 1;
    int secundaria = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != (i == j))
                principal = 0;

            if (arr[i][j] != (i + j == 2))
                secundaria = 0;

            if (!principal && !secundaria)
                return 0;
        }
    }

    return 15;
}
int main()
{
    int v_luke, v_darth;

    scanf("%d%d", &v_luke, &v_darth);
    
    int g_luke[3][3], g_darth[3][3];
    
    while (ler_matriz(g_luke) && ler_matriz(g_darth)) {
        v_darth -= golpe_valido(g_luke);
        v_luke -= golpe_valido(g_darth);
    }
    
    if (v_luke > v_darth)
        printf("Luke Skywalker venceu.");
    else if (v_darth > v_luke)
        printf("Darth Vader venceu.");
    else
        printf("Houve empate.");

    return 0;
}