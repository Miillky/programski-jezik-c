// Izradite program koji omogućava unos cjelobrojne vrijednosti n s tipkovnice. Program mora
// stvoriti polje od n elemenata. Omogućite unos vrijednosti s tipkovnice i pohranite ih u elemente
// polja. Nakon što se unesu svi elementi polja, prikažite polje.
// Pokušajte iskoristiti funkcije iz prošlog zadatka.

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
    int n;
    int i;

    printf("Unesite broj elemenata: ");
    scanf("%d", &n);

    polje = izradiPolje(n);
    if (polje == NULL) {
        printf("Nije uspjelo stvaranje polja!\n");
        return -1;
    }

    for (i = 0; i < n; i++) {
        printf("Unesite vrijednost: ");
        scanf("%d", &polje[i]);
    }

    prikaziPolje(polje, n);

    free(polje);

    return 0;
}