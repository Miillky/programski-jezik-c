// Izradite program koji definira polje cjelobrojnih vrijednosti. Izradite funkciju kojoj ćete proslijediti
// pokazivač na prvi element polja. Neka funkcija pomoću pokazivača prikaže sve elemente polja.

#include "stdio.h"

void prikaziPolje(int *p, int n){

    for(int i = 0; i < n; i++){
        printf("Vrijednost elmenta: %d\n", p[i]);
    }

    // ili

    for(int i = 0; i < n; i++){
        printf("Vrijednost elmenta: %d\n", *p);
        p++;
    }

}

int main(void){

    int polje[5] = { 4, 5, 6, 7, 8 };

    // polje = &polje[0] -> prvi element polja
    prikaziPolje(polje, 5);

    return 0;
}