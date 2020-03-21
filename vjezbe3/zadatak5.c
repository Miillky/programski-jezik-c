// Izradite program koji definira makro naredbu koja izračunava kvadrat neke cjelobrojne vrijednosti.
// Neka program pomoću jedne scanf funkcije unese dvije cjelobrojne vrijednosti (npr. a i b) i
// koristeći makro naredbu izračuna i prikaže rezulrat izraza: a2 + b2.

#include <stdio.h>

#define kvadrat(a, b) (a*a) + (b*b)

int main(void){

    int a, b;
    printf("Unesite a: ");
    scanf("%d", &a);
    printf("Unesite b: ");
    scanf("%d", &b);
    printf("Kvadrat je: %d", kvadrat(a, b));

    return 0;
}