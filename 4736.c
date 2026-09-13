/*
Nome do problema: Oileh no espaço
*/
#include <stdio.h>

int size(int n)
{
    if(n < 10) return n;

    return n % 10 + size(n / 10);
}
void corrige_msg(int n, char msg[], int i, char msg_corrigida[])
{
    if(msg[i] == '\0') return;

    msg_corrigida[i] = msg[n];

    corrige_msg(n - 1, msg, i + 1, msg_corrigida);
}
void imprimir_msg(int n)
{
    if(n == 0) return;

    int tam;

    scanf("%d", &tam);

    getchar();

    tam = size(tam);

    char msg[tam + 1];
    char msg_corrigida[tam + 1];

    scanf("%s", msg);

    msg[tam] = '\0';
    msg_corrigida[tam] = '\0';

    corrige_msg(tam - 1, msg, 0, msg_corrigida);    

    printf("%s\n", msg_corrigida);

    imprimir_msg(n - 1);
}
int main()
{
    int n;

    scanf("%d", &n);

    imprimir_msg(n);

    return 0;
}