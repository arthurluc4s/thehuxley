/*
Nome do problema: Vamos ao Cinema!
*/
#include <stdio.h>

int main() {
    int alu_total, sup_alu, oni_qtd, oni_max;

    scanf("%d%d%d%d", &alu_total, &sup_alu, &oni_qtd, &oni_max);

    int sup_qtd = sup_alu > 0 ? alu_total / sup_alu : 0;
    sup_qtd += (alu_total % sup_alu) > 0 ? 1 : 0;

    int capacidade = (oni_qtd * oni_max) - alu_total - sup_qtd;

    if(!alu_total) {
        printf("Davi foi assistir o filme sozinho =(\n");
    } else if(capacidade < 0) {
        printf("Não é possível.\n");
        printf("Falta %d vagas.\n", capacidade * -1);
    } else
    {
        printf("Iremos ao cinema!\n");
        if(capacidade == 0)
            printf("Todas as vagas foram preenchidas.\n");
        else
            printf("Vagas Vazias = %d\n", capacidade);
    }

    return 0;
}