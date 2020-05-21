// Izradite funkciju koja prima dva int pokazivača i koja vraća pokazivač na onaj element koji je
// veći. Prototip funkcije je: int* maks(int *a, int *b);.

#include "stdio.h"

int* maks(int *a, int *b){
    if(*a > *b){
        return a;
    } else {
        return b;
    }
}

int main(void){

    int a = 5;
    int b = 6;
    int *p = NULL;

    p = maks(&a, &b);

    printf("Veće: %d", *p);

    return 0;
}