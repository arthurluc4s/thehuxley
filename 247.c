/*
Nome do problema: Inverter uma string
*/
#include <stdio.h>

void print_inverso(char str[], int i)
{
    if(str[i] == '\0') return;
    
    print_inverso(str, i + 1);

    printf(i == 0 ? "%c\n" : "%c", str[i]);
}

int main()
{
    char string[300];

    scanf("%255s", string);

    print_inverso(string, 0);
    
    return 0;
}