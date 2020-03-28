// Napisati program koji će s tipkovnice učitati dva cijela broja. Ako je jedan od učitanih brojeva
// veći od 100, a onaj drugi manji od 100, ispisati poruku: Jedan je veci, drugi je manji od
// 100. (uočiti: piše jedan od učitanih brojeva, a ne prvi učitani broj). Inače, ne ispisati ništa.

#include <stdio.h>

int main(){

    int broj1;
    int broj2;

    printf("Unesite prvi broj: " );
    scanf("%d", &broj1);

    printf("Unesite drugi broj: " );
    scanf("%d", &broj2);

    if( (broj1 < 100 && broj2 > 100) || (broj1 < 100 && broj2 > 100) ){
        printf("Jedan je veci, drugi je manji od 100");
    }

    return 0;
}