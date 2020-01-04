#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,roznica;

    printf("Wprowadz 2 liczby do wykonania odejmowania\n");
    printf("Liczba 1: ");
    scanf("%d", &a);

    printf("Liczba 2: ");
    scanf("%d", &b);

    roznica = a-b;
    printf("%d - %d = %d\n", a, b, roznica);

    return 0;
}
