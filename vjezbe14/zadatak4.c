// Definirajte strukturu koja određuje točku u 2D prostoru (X,Y). Izradite funkciju koja prikazuje
// točku u obliku “(X,Y)”. Unesite dvije točke s tipkovnice i prikažite ih.

#include "stdio.h"

struct tocka {
    int x;
    int y;
};

void prikaziTocku(struct tocka t) {
    printf("(%d,%d)\n", t.x, t.y);
}

int main(){

    struct tocka t1;
    struct tocka t2;

    printf("T1: unesite X i Y: ");
    scanf("%d %d", &t1.x, &t1.y);

    printf("T2: unesite X i Y: ");
    scanf("%d %d", &t2.x, &t2.y);

    prikaziTocku(t1);
    prikaziTocku(t2);

    return 0;
}