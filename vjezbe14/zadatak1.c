// Definirajte strukturu koja će pohraniti informacije o knjizi: oznaka knjige (cjelobrojna vrijednost),
// te informacije o autoru i naslovu knjige. U glavnom programu deklarirajte dvije varijable ove
// strukture i inicijalizirajte strukture na proizvoljne vrijednosti. Prikažite u zasebnim redovima sve
// informacije sadržane u strukturama.

#include "stdio.h"

struct knjiga {
    int oznaka;
    char autor[20];
    char naslov[20];
};

int main(){

    struct knjiga knjiga1 = { 10, "Douglas Adams", "Hitchikers..." };
    struct knjiga knjiga2 = { 12, "Douglas", "Hitchikers" };

    printf("Prva knjiga: %d %s %s\n", knjiga1.oznaka, knjiga1.autor, knjiga1.naslov);
    printf("Druga knjiga: %d %s %s\n", knjiga2.oznaka, knjiga2.autor, knjiga2.naslov);

    return 0;
}