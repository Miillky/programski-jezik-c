// Izradite funkciju koja provjerava da li je broj paran. Ukoliko je broj paran, prikazuje se “Broj je
// paran.”, inače ne prikazuje ništa.

#include "stdio.h"

void brojParan(int broj){
    if(broj % 2 == 0){
        printf("Broj je paran.\n");
    }
}

int main(void){

    brojParan(20);

    return 0;
}