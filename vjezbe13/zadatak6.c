// Nadogradite program iz prošlog zadatka na način da dodate funkciju izmijeni koja će dodati u
// polje toliko elemenata koliko ima negativnih elemenata u polju. Npr. ukoliko naše polje sadrži
// elemente [ 2, 6, -2, 3, -1 ], funkcija izmijeni mora dodati dva elementa u polje i postaviti
// ih u 0: [ 2, 6, -2, 3, -1, 0, 0]. Funkcija vraća NULL ukoliko nije uspjela izmjena, inače
// vraća pokazivač na izmjenjeno polje. Prototip funkcije je:
// int* izmijeni(int *polje, int *n);
// Napomena: n se mora izmijeniti ukoliko su dodani elementi u polje.
// U glavnoj funkciji prikažite korištenje navedene funkcije i prikažite polje prije i nakon izmjene.

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int* izradiPolje(int brojElemenata) {
    return (int*)calloc(brojElemenata, sizeof(int));
}

void prikaziPolje(int *polje, int brojElemenata) {
    int i;
    for (i = 0; i < brojElemenata; i++) {
        printf("%d ", polje[i]);
    }
    printf("\n");
}

int* izmijeni(int *polje, int *n) {
    int *p;
    int negativnih = 0;
    int i;

    for (i = 0; i < *n; i++) {
        if (polje[i] < 0) {
            negativnih++;
        }
    }

    polje = (int*)realloc(polje, (*n + negativnih) * sizeof(int));

    for (i = *n; i < (*n + negativnih); i++) {
        polje[i] = 0;
    }

    *n = *n + negativnih;
    return polje;
}

int main(void){

    int *polje;
    int n = 5;

    polje = izradiPolje(n);
    if (polje == NULL) {
        printf("Nije uspjelo stvaranje polja!\n");
        return -1;
    }

    polje[0] = 2;
    polje[1] = -6;
    polje[2] = -2;
    polje[3] = -3;
    polje[4] = -1;

    prikaziPolje(polje, n);

    polje = izmijeni(polje, &n);

    prikaziPolje(polje, n);

    free(polje);

    return 0;
}