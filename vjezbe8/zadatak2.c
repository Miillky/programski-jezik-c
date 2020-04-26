// Proširite 1. zadatak da nakon prikazanog imena prikažete i duljinu imena (broj slova). Duljinu
// prikažite na dva načina: ručno prebrojavanje znakova koristeći petlju te koristeći ugrađenu funkciju
// strlen() koja se nalazi u string.h.
// Unesite Vase ime : Linus
// Vase ime je : Linus
// Broj slova ( petlja ): 5
// Broj slova ( strlen ): 5

#include "stdio.h"
#include "string.h"

int main(void){

    char ime[40];
    int brojSlova;
    int i;

    printf("Unesite Vase ime: ");
    scanf("%s", ime);  // ime == &ime[0]

    printf("Vase ime: %s\n", ime);

    brojSlova = 0;
    while (ime[brojSlova] != '\0') {
        brojSlova++;
    }
    printf("Broj slova (petlja): %d\n", brojSlova);
    printf("Broj slova (strlen): %lu\n", strlen(ime));

    return 0;
}