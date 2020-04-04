// Izradite program koji izračunava sumu znamenaka bilo kojeg unesenog pozitivnog cijelog broja.

#include <stdio.h>

int main(){

    int broj;
    int suma;

    printf("Unesite pozitivan broj: ");
    scanf("%d", &broj);

    suma = 0;
    while(broj > 0){
        suma = suma + broj % 10;
        broj /= 10;
    }

    printf("Suma znamenaka: %d", suma);

    return 0;
}