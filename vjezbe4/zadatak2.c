// Napišite program koji prihvaća dva cijela broja sa standardnog ulaza s porukom Molimo unesite
// dva cijela broja:, uspoređuje ih i ispisuje prvi broj je veći/manji/jednak od drugog broja.

#include <stdio.h>

int main(){

    int broj1;
    int broj2;

    printf("Unesite prvi broj: " );
    scanf("%d", &broj1);

    printf("Unesite drugi broj: " );
    scanf("%d", &broj2);

    if(broj1 > broj2){
        printf("Prvi broj je veci od drugog!\n");
    } else if(broj1 < broj2){
        printf("Brvi broj je manji od drugog!\n");
    } else {
        printf("Brojevi su jednaki!");
    }

    return 0;
}