// Izradite program koji u glavnoj funkciji (main) omogućava unos cjelobrojne vrijednosti s tipkovnice.
// Izračunajte drugi korijen unesenog broja i pohranite rezultat u drugu varijablu. Za izračunavanje
// drugog korijena možete koristiti funkciju sqrt koja je definirana u math.h datoteci (https://en.cppreference.com/w/c/numeric/math/sqrt).
// Prikažite unesenu i izračunatu vrijednost. Sve varijable koje koristite moraju biti dinamički
// alocirane.

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(void){

    int *broj = NULL;
    float *korijen = NULL;

    broj = (int*)malloc(sizeof(int));
    if (broj == NULL) {
        printf("Neuspjesna alokacija memorije!");
        return -1;
    }
    korijen = (float*)malloc(sizeof(float));
    if (korijen == NULL) {
        printf("Neuspjesna alokacija memorije!");
        return -1;
    }

    printf("Unesite broj: ");
    scanf("%d", broj);

    *korijen = sqrt(*broj);

    printf("Broj je: %d\n", *broj);
    printf("Korijen je: %f\n", *korijen);

    free(broj);
    free(korijen);

    return 0;
}