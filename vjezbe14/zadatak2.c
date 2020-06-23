// Koristeći strukturu definiranu u 1. zadatku, omogućite unos informacija s tipkovnice. Definirajte
// varijable za dvije knjige, i sve informacije unesite s tipkovnice. Nakon unos, prikažite podatke o
// knjigama.

#include "stdio.h"

struct knjiga {
    int oznaka;
    char autor[20];
    char naslov[20];
};

int main(){

    struct knjiga knjiga1;
    struct knjiga knjiga2;

    printf("Unesite oznaku knjige: ");
    scanf("%d", &knjiga1.oznaka);

    printf("Unesite autora knjige: ");
    scanf("%s", knjiga1.autor);

    printf("Unesite naslov knjige: ");
    scanf("%s", knjiga1.naslov);

    printf("Prva knjiga: %d %s %s\n", knjiga1.oznaka, knjiga1.autor, knjiga1.naslov);

    printf("Unesite oznaku knjige: ");
    scanf("%d", &knjiga2.oznaka);

    printf("Unesite autora knjige: ");
    scanf("%s", knjiga2.autor);

    printf("Unesite naslov knjige: ");
    scanf("%s", knjiga2.naslov);

    printf("Prva knjiga: %d %s %s\n", knjiga2.oznaka, knjiga2.autor, knjiga2.naslov);

    return 0;
}