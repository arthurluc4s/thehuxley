/*
Nome do problema: Três Rodadas pela Vitória
*/
#include <stdio.h>

int n1_rd1, n2_rd1;
float n1_rd2, n2_rd2;
float n1_rd3, n2_rd3, n3_rd3;

void ler_numeros(void)
{
    scanf("%d%d", &n1_rd1, &n2_rd1);
    scanf("%f%f", &n1_rd2, &n2_rd2);
    scanf("%f%f%f", &n1_rd3, &n2_rd3, &n3_rd3);
}
float aldrin()
{
    float a = 0;
    ler_numeros();

    //Rd 1:
    int soma = n1_rd1 + n2_rd1;
    a += (soma % 2 == 0) ? 2 : 0;

    //Rd 2:
    float media = (n1_rd2 + n2_rd2) / 2;
    a += (media > 7) ? 4 : -2;

    //Rd 3:
    float media_p = 2 * n1_rd3 + 3 * n2_rd3 + 4 * n3_rd3;
    media_p /= (2 + 3 + 4);
    a += (media_p >= 10 && media_p <= 20) ? 5 : -2;

    return a;
}
float beren()
{
    float b = 0;
    ler_numeros();

    //Rd 1:
    b += (n1_rd1 > n2_rd1) ? 2 : 0;

    //Rd 2:
    float div = (n1_rd2 / n2_rd2);
    b += (div >= 1) ? 4 : -2;

    //Rd 3:
    float soma_real = n1_rd3 + n2_rd3;
    b += (soma_real >= n3_rd3) ? 5 : -2;

    return b;
}

int main()
{
    float a = aldrin();
    float b = beren();

    //Bonus
    if(a > 0 && (int) a % 3 == 0)
        a *= 1.2;
    if(b > 0 && (int) b % 2 == 0)
        b *= 1.25;

    //Resultado
    if(a > b) {
        printf("Aldrin: %.2f - Vencedor\n", a);
        printf("Beren: %.2f - Perdedor\n", b);
    } else if(b > a) {
        printf("Beren: %.2f - Vencedor\n", b);
        printf("Aldrin: %.2f - Perdedor\n", a);
    } else {
        printf("Aldrin: %.2f - Empate\n", a);
        printf("Beren: %.2f - Empate\n", b);
    }

    return 0;
}