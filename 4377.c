/*
Nome do problema: Figuras
*/
#include <stdio.h>

void base_sup(int n, int ast, int esp)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= esp; j++)
            printf(" ");

        for(int k = 1; k <= ast; k++) {
            
            printf("*");

            if(k == ast)
                printf("\n");
            else
                printf(" ");
        }

        esp -= 2;
        ast += 2;
    }

}
void base_inf(int n, int ast, int esp)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= esp; j++)
            printf(" ");

        for(int k = 1; k <= ast; k++) {
            
            printf("*");
            
            if(k == ast)
                printf("\n");
            else
                printf(" ");
        }

        esp += 2;
        ast -= 2;
    }
}
int main()
{
    int n;
    char k;

    scanf("%d %c", &n, &k);

    if(k == 'I') {
        base_inf(n, n * 2 - 1, 0);
    } else if(k == 'S') {
        base_sup(n, 1, n * 2 - 2);
    } else {
        base_sup(n, 1, n * 2 - 2);
        base_inf(n, n * 2 - 1, 0);
    }
    
    return 0;
}