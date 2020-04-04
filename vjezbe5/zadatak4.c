//Izradite program koji omogućava unos cijelog broja s tipkovnice. Prikazati sumu svih brojeva od
// 0 do unesenog broja, te prosječnu vrijednost.

#include <stdio.h>

int main(){

    int broj;
    int i;

    int suma;
    float prosjek;

    printf("Unesite pozitivan broj: ");
    scanf("%d", &broj);

    suma = 0;

    for(i = 0; i <= broj; i++){
        suma = suma + i;
    }

    printf("Suma: %d\n", suma);

    prosjek = suma / (float)broj;
    printf("Prosjek: %f\n", prosjek);

    return 0;
}