/*
Nome do problema: Operação bancária
*/
#include <stdio.h>

int ler_operacoes(int n, double arr[][n])
{
    int i = 0;
    for (;i < 101; i++) {
        int op;
        double val;

        scanf("%d", &op);

        if (op == -1) 
            break;

        scanf("%lf", &val);

        arr[i][0] = op;
        arr[i][1] = val;
    }
    return i;
}
void executa_op(int l, int c, double arr[][c])
{
    double saldo = 0, cred = 0, deb = 0;
    for (int i = 0; i < l; i++) {
        int op = arr[i][0];
        double val = arr[i][1];
        
        switch (op) {
            case 0:
                saldo -= val;
                deb += val;
                break;
            case 1:
                saldo += val;
                cred += val;
                break;
        }
        
    }

    printf("Creditos: R$ %.2lf\n", cred);
    printf("Debitos: R$ %.2lf\n", deb);
    printf("Saldo: R$ %.2lf\n", saldo);
}
int main()
{
    double extrato[101][2];

    int total_op = ler_operacoes(2, extrato);
    
    executa_op(total_op, 2, extrato);

    return 0;
}