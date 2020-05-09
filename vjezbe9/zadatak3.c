// Izradite funkciju koja vraća sumu prvih n prirodnih brojeva.

#include "stdio.h"

int sumaBrojeva(int n){
    int suma;
    int i;

    suma = 0;
    for(i = 1; i <= n; i++){
        suma = suma + i;
    }

    return suma;
}

int main(void){

    printf("Suma: %d\n", sumaBrojeva(20));

    return 0;
}