
/*
Música Para os Meus Ouvidos
*/
#include <stdio.h>

int main() {
    int primario, secundario;
    double fator;
    scanf("%d%d%lf", &primario, &secundario, &fator);

    if(primario == 1 || primario == 3) {
        if(secundario == 1) printf("Aumenta mais!\n");
        else printf("Legal\n");
    }
    else {
        if(secundario == 1) printf("Essa eh punk\n");
        else printf("Hoje eu choro\n");
    }

    if(fator <= 4) printf(":'(\n");
    else if(fator <= 7) printf("^_^\n");
    else printf("=D");    

    return 0;
}