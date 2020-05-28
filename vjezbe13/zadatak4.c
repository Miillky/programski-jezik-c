// Izradite funkciju koja dinamički alocira memoriju i stvara cjelobrojno polje proizvoljnog broja
// elemenata. Funkcija vraća pokazivač na izrađeno polje, ili NULL ako iz bilo kojeg razloga nije
// uspjelo stvaranje polja. Svi elementi moraju biti postavljeni na 0. Prototip funkcije je:
// int* izradiPolje(int brojElemenata);
// Izradite drugu funkciju koja prikazuje elemente cjelobrojnog polja. Prototip funkcije je:
// void prikaziPolje(int *polje, int brojElemenata);
// U glavnoj funkciji prikažite korištenje navedenih funkcija.

#include "stdio.h"
#include "stdlib.h"

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

int main(void){

    int *polje;
    int n = 5;

    polje = izradiPolje(n);
    if (polje == NULL) {
        printf("Nije uspjelo stvaranje polja!\n");
        return -1;
    }

    prikaziPolje(polje, n);

    free(polje);

    return 0;
}