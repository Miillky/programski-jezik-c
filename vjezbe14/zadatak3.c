// Izmijenite prošli zadatak tako da izradite funkciju koja prikazuje podatke o pojedinoj knjizi. Nije
// potrebno koristiti pokazivače.

#include "stdio.h"

struct knjiga {
    int oznaka;
    char autor[20];
    char naslov[20];
};

void prikaziKnjigu(struct knjiga k) {
    printf("Prva knjiga: %d %s %s\n", k.oznaka, k.autor, k.naslov);
}

int main(){

    struct knjiga knjiga1;

    printf("Unesite oznaku knjige: ");
    scanf("%d", &knjiga1.oznaka);

    printf("Unesite autora knjige: ");
    scanf("%s", knjiga1.autor);

    printf("Unesite naslov knjige: ");
    scanf("%s", knjiga1.naslov);

    prikaziKnjigu(knjiga1);

    return 0;
}