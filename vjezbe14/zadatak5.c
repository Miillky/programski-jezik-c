// Izradite funkciju koja će omogućiti zbrajanje dvije točke u prostoru. Funkcija vraća rezultat
// zbrajanja dvije točke.

#include "stdio.h"

struct tocka {
    int x;
    int y;
};

void prikaziTocku(struct tocka t) {
    printf("(%d,%d)\n", t.x, t.y);
}

struct tocka zbrojiTocke(struct tocka t1, struct tocka t2) {
    struct tocka rezultat;
    rezultat.x = t1.x + t2.x;
    rezultat.y = t1.y + t2.y;
    return rezultat;
}

int main(){

    struct tocka t1 = { 5, 6 };
    struct tocka t2 = { 7, 8 };
    struct tocka rjesenje;

    prikaziTocku(t1);
    prikaziTocku(t2);

    rjesenje = zbrojiTocke(t1, t2);

    prikaziTocku(rjesenje);

    return 0;
}