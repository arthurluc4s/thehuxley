/*
Nome do problema: Brincando com matrizes II
*/
#include <stdio.h>

int main()
{
    int m[3][3];
    int soma_positivos = 0, soma_elementos = 0;
    int positivos = 0, menor = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);

            if (m[i][j] > 0) {
                soma_positivos += m[i][j];
                positivos++;
            }

            if ((i == 0 && j == 0) || (menor > m[i][j]))
                menor = m[i][j];

            if (i != j)
                soma_elementos += m[i][j];

        }
    }

    double med = (double) soma_positivos / positivos;
    int delta = (menor % 2 == 0) ? 1 : 0;

    printf("%.2lf %d %d %d\n", med, menor, delta, soma_elementos);
    
    return 0;
}