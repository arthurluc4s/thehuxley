/*
Nome do problema: Programador Dedicado
*/
#include <stdio.h>

void print_day(int n) {
    
    switch(n) {
        case 0:
            printf("DOMINGO\n");
            break;
        case 1:
            printf("SEGUNDA\n");
            break;
        case 2:
            printf("TERCA\n");
            break;
        case 3:
            printf("QUARTA\n");
            break;
        case 4:
            printf("QUINTA\n");
            break;
        case 5:
            printf("SEXTA\n");
            break;
        default:
            printf("SABADO\n");
            break;
    }
}
void loop(int i, int n, int meta_prog, int meta_lin, int max_prod, int d_max_prod)
{
    if(i == n) {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", meta_prog);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", meta_lin);
        printf("DIA QUE MAIS PRODUZIU: ");
        print_day(d_max_prod);
        return;
    }

    int prog, lin;

    scanf("%d%d", &prog, &lin);

    if(prog >= 5) meta_prog++;
    
    if(lin >= 100) meta_lin++;

    if(lin > max_prod) {
        max_prod = lin;
        d_max_prod = i;
    }

    loop(i + 1, n, meta_prog, meta_lin, max_prod, d_max_prod);
}
int main()
{
    loop(0, 7, 0, 0, 0, 0);
    
    return 0;
}