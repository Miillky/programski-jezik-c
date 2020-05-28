// Izmijenite program iz prvog zadatka na način da izračunavanje korijena napravite u posebnoj
// funkciji korijen. Funkcija vraća -1 ukoliko nije moguće izračunati drugi korijen (negativan broj).
// U protivnom vraća 0 i rezultat sprema u *rezultat Prototip funkcije je:
// int korijen(int *broj, int *rezultat);
// U glavnoj funkciji prikažite korištenje navedene funkcije. Broj i rezultat moraju biti dinamički
// alocirani. Ostale (pomoćne) varijable ne moraju biti dinamički alocirane.

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int korijen(int *broj, float *rezultat) {
    if (*broj < 0) {
        return -1;
    }

    *rezultat = sqrt(*broj);
    return 0;
}

int main(void){

    int *broj = NULL;
    float *rezultat = NULL;

    broj = (int*)malloc(sizeof(int));
    if (broj == NULL) {
        printf("Neuspjesna alokacija memorije!");
        return -1;
    }
    rezultat = (float*)malloc(sizeof(float));
    if (rezultat == NULL) {
        printf("Neuspjesna alokacija memorije!");
        return -1;
    }

    printf("Unesite broj: ");
    scanf("%d", broj);

    // *korijen = sqrt(*broj);

    // broj <- adresa naseg podatka
    // *broj <- vrijednost naseg podatka

    if (korijen(broj, rezultat) == -1) {
        printf("Neuspjesno izracuvanje korijena\n");
    }

    printf("Broj je: %d\n", *broj);
    printf("Korijen je: %f\n", *rezultat);

    free(broj);
    free(rezultat);

    return 0;
}