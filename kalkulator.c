#include <stdio.h>
#include <stdlib.h>

#include <odejmowanie.h>
#include <mnozenie.h>

float main()
{
    float a, b;
    char znak;
    puts("Podaj 1 liczbe");
    scanf(" %f", &a);
    puts("Podaj 2 liczbe");
    scanf(" %f", &b);
    printf("Co chcesz zrobić? \n");
    printf("(dodawanie-'+' | odejmowanie-'-' | mnozenie-'*' | dzielenie-'/'");
    scanf(" %c", &znak);
    switch (znak)
    {
	case '+': dodawanie(a,b);break;
	case '-': odejmowanie(a,b);break;
	case '*': mnozenie(a,b);break;
	case '/': dzielenie(a,b);break;
	default: puts("To nie jest poprawny znak");break;
    }
 return 0;
}

