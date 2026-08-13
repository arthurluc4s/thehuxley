/*
Nome do problema: O Caminho da Roça
*/
#include <stdio.h>

int main() {
    char um, dois, tres, quatro;
    
    scanf(" %c %c %c %c", &um, &dois, &tres, &quatro);

    if(um == 'D') {
        if(dois == 'D') {
            if(quatro == 'D')
                printf("Pasto\n");
            else
                printf("Abrigo\n");
        } else {
            printf("Coucho\n");
        }
    }
    else {
        if(tres == 'D')
            printf("Estabulo\n");
        else
            printf("Galpao de ordenha\n");
    }

    return 0;
}