// Napišite program koji traži unos cijelg broja sa standardnog ulaza s porukom Molimo unesite
// cijeli broj: te ispisuje poruke Veci je od 234! odnosno Nije veci od 234! ovisno o tome
// da li je uneseni broj veći ili manji od 234. Također potrebno je ispisati vrijednost izraza u uvjetu.
// Molimo unesite cijeli broj : 235
// Uvjet je 1
// Veci je od 234!

#include <stdio.h>

int main(){

    int broj;
    _Bool uvjet;

    printf("Molimo unesite cijeli broj: ");
    scanf("%d", &broj);

    uvjet = broj > 234;
    printf("Uvjet je %d\n", uvjet);

    if(uvjet == 1){
        printf("Veci je od 234!");
    } else {
        printf("Nije veci od 234!");
    }

    return 0;
}