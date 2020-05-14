// Izradite program koji deklarira jednu cjelobrojnu varijablue. Inicijalizirajte varijablu na proizvoljnu
// vrijednost. Izradite pokazivač koji pokazuje na izrađenu cjelobrojnu varijablu. Prikažite adresu
// pokazivača (u dekadskom i heksadekadskom sustavu), vrijednost pokazivača te vrijednost na koju
// pokazuje pokazivač.

#include "stdio.h"
#include "stddef.h"

int main(void){

    int broj;

    //int *p = & broj;

    int *p = NULL;
    broj = 6;
    p = &broj;

    printf("Adresa pokazivača %p\n", &p);
    printf("Vrijednost na koju pokazuje pokazivač: %d\n", *p);

    // p <= adresa varijable na koju pokazivac pokazuje
    // *p <= vrijednost varijable na koju pokazivac pokazuje

    return 0;
}