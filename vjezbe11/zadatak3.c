// Izradite program koji omogućava unos dva broja s tipkovnice. Izračunajte zbroj i umnožak u
// posebne varijable. Prikažite rezultate. Sve manipulacije s varijablama izvedite pomoću pokazivača
// (unos, izračun, prikaz).

#include "stdio.h"
#include "stddef.h"

int main(void){

    int broj1;
    int broj2;
    int zbroj;
    int umnozak;

    int *pbroj1 = &broj1;
    int *pbroj2 = &broj2;
    int *pzbroj = &zbroj;
    int *pumnozak = &umnozak;

    printf("Unesite prvi broj: ");
    scanf("%d", pbroj1);

    printf("Unesite drugi broj: ");
    scanf("%d", pbroj2);

    *pzbroj = *pbroj1 + *pbroj2;
    *pumnozak = *pbroj1 * *pbroj2;

    printf("Zbroj je: %d\n", *pzbroj);
    printf("Umnožak je: %d\n", *pumnozak);

    return 0;
}