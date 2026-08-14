/*
A viagem
*/
#include <stdio.h>

int main() {
    double sal, fixa, km, distancia;
    int fds;

    scanf("%lf%lf%lf%lf%d", &sal, &fixa, &km, &distancia, &fds);

    double tarifa = fixa + km * distancia;
    
    double limite = sal * 0.3; 

    if(fds) {
        tarifa *= 1.1;
    }

    if(tarifa <= limite) {
        double saldo = limite - tarifa;

        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifa);
        printf("%.2lf\n", saldo);
    } else {
        printf("Não vai poder viajar.\n");
        printf("%.2lf\n", tarifa - limite);
    }

    return 0;
}