/*
Nome do problema: Maior e menor elemento de um array
*/
#include <stdio.h>

void scan_arr(int i, int n, int arr[], int menor, int maior)
{
    if(i == n){
        printf("%d\n%d\n", menor, maior);
        return;
    }

    scanf("%d", &arr[i]);

    if(i == 0) {
        scan_arr(i + 1, n, arr, arr[0], arr[0]);
    } else {
        int novo_maior = (maior < arr[i]) ? arr[i] : maior;
        int novo_menor = (menor > arr[i]) ? arr[i] : menor;
        
        scan_arr(i + 1, n, arr, novo_menor, novo_maior);
    }
}

int main()
{
    int arr[6];
    
    scan_arr(0, 6, arr, 0, 0);

    return 0;
}