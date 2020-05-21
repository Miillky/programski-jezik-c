// Izradite funkciju koja prebrojava koliko ima negativnih elemenata u polju. Prototip funkcije je int
// negativni(int *p, int n);. U main funkciji prikažite primjer korištenja navedene funkcije.

#include "stdio.h"

// 1. način
int negativni1(int *p, int n){
    int *pok;
    int negativni = 0;
    // ili
    // *pok = p
    // for(; pok < p + 1; pok++){

    for(pok = p; pok < p + n; pok++){
        if(*pok < 0){
            negativni++;
        }
    }

    return negativni;
}

// 2. način
int negativni2(int *p, int n){
    int i;
    int negativni = 0;

    for(i = 0; i < n; i++){
        if(p[i] < 0){
            negativni++;
        }
    }

    return negativni;
}

int main(void){

    int polje[5] = {5, -3, -2, 7, 9};
    printf("Broj negativnih: %d\n", negativni1(polje, 5));
    printf("Broj negativnih: %d\n", negativni2(polje, 5));

    return 0;
}