/*
Torcedor Fanático
*/
#include <stdio.h>

int main() {
    int c, t, a, l, e;

    scanf("%d%d%d%d%d", &c, &t, &a, &l, &e);

    double vitoria = 100;

    if(c) {
        switch(t) {
            case 1:
                vitoria += 33.21;    
                break;
            case 2:
                vitoria += 10.51;
                break;
            default:
                vitoria -= 20.7;
                break;
        }

        vitoria += (a > 40000) ? a * 0.0008 : -0.0008 * a;
        vitoria += (e >= 0) ? e * 2.7 : e * -1.8;
    } else {
        vitoria = (t > 1) ? 0 : vitoria;

        if(t == 1) {
            vitoria -= 10.87;
            vitoria += (a > 45000) ? a * -0.0003 : a * -0.0001;
            vitoria += (e < 0) ? e * -1.5 : e * 5.2;  
        }
    }
    
    vitoria -= l * 2.7;

    printf("A chance de vitoria do flamengo e de ");

    if(vitoria > 100)
        printf("100.00\n");
    else if(vitoria < 0)
        printf("0.00\n");
    else
        printf("%.2lf\n", vitoria);

    return 0;
}