#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1, liczba2, suma;
    printf("Proszę podać 2 liczby\n");
    printf("Liczba 1: ");
    scanf("%d", &liczba1);

    printf("Liczba 2: ");
    scanf("%d", &liczba2);

    suma= liczba1+liczba2;
    printf("%d + %d = %d \n\n", liczba1, liczba2, suma);
    printf("Wynik dodawania tych liczb to: %d", suma);
    return 0;
}
