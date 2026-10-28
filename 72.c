/*
Nome do problema: Inverso
*/
#include <stdio.h>

void print_inverso(int arr[], int n)
{
    if(n < 0) return;
    
    printf("%d%c", arr[n], n != 0 ? ' ' : '\n');
    
    print_inverso(arr, n - 1);
}

void loop(int i, int arr[], int n)
{
     if(i == n) {
        print_inverso(arr, n - 1);
        return;
     }

     scanf("%d", &arr[i]);

     loop(i + 1, arr, n);
}

int main()
{
    int n;
    
    scanf("%d", &n);

    int arr[n];

    loop(0, arr, n);
    
    return 0;
}