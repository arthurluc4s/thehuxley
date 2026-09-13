/*
Nome do problema: Notação Científica
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    scanf("%lf", &x);

    int grandeza = log10(x);

    printf("%d\n", grandeza);
	
    return 0;
}