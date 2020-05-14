// Izradite program koji deklarira jednu cjelobrojnu varijablue. Inicijalizirajte varijablu na proizvoljnu
// vrijednost. Izradite pokazivač koji pokazuje na izrađenu cjelobrojnu varijablu. Prikažite adresu
// pokazivača (u dekadskom i heksadekadskom sustavu), vrijednost pokazivača te vrijednost na koju
// pokazuje pokazivač.

#include "stdio.h"
#include "stddef.h"

int main(void){

    int broj;
    float decimalni;

    int *pbroj = NULL;
    float *pdecimalni = NULL;

    broj = 24;
    decimalni = 156.23;

    pbroj = &broj;
    pdecimalni = &decimalni;

    printf("Broj je: %d\n", broj);
    printf("Decimalni je: %f\n", decimalni);
    printf("Broj je: %d\n", *pbroj);
    printf("Decimalni je: %f\n", *pdecimalni);

    return 0;
}