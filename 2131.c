/*
Nome do problema: Matriz de votação
*/
#include <stdio.h>

void votacao(int l, int c, int arr[][c])
{
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    
}
void apuracao(int l, int c, int arr[][c])
{
    for (int j = 0; j < c; j++) {
        int soma = 0;
        for (int i = 0; i < l; i++) {
            soma += arr[i][j];
        }
        printf("Princesa %d: %d voto(s)\n", j + 1, soma);
    }
}
int main()
{
    int lin, col;

    scanf("%d%d", &col, &lin);

    int votos[lin][col];

    votacao(lin, col, votos);

    apuracao(lin, col, votos);
    
    return 0;
}