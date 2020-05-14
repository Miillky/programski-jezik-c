// Izradite funkciju maksimum koja prima dva parametra - pokazivača na dvije cjelobrojne vrijednosti.
// Funkcija vraća vrijednost onog parametra koji ima veću vrijednost. Prototip funkcije je:
// int maksimum(int *prvi, int *drugi);

#include "stdio.h"

int maksimum(int *a, int *b){

    if( *a > *b ) {
        return *a;
    } else {
        return *b;
    }

}

// Za adresu maksimuma
int* maksimumSPokazivacem(int *a, int *b){

    if( *a > *b ) {
        return a;
    } else {
        return b;
    }

}

int main(void){

    int a = 5;
    int b = 6;
    int max;

    max = maksimum(&a, &b);

    printf("Maksimum je: %d\n", max);

    // Za adresu maksimuma
    int *p = NULL;
    p = maksimumSPokazivacem(&a, &b);
    printf("Maksimum adresa je: %d\n", *p);

    return 0;
}