// Omogućite unos prirodne cjelobrojne vrijednosti (unsigned short) i prikažite ju u heksadekadskom i dekadskom obliku.
// Uključite drugi bit i ponovno prikažite u heskadekadskom (s vodećim nulama) i dekadskom obliku u novom redu.
// Isključite nulti bit prvotno unesene vrijednosti i ponovno u novom redu prikažite vrijednost u hestadekadskom i dekadskom obliku.

#include <stdio.h>

int main(void){

    int broj, b1, b2;
    printf("Unesite broj: ");
    scanf("%d", &broj);

    b1 = broj;
    b2 = broj;

    b1 ^= 1 << 2;
    b2 ^= 1 << 0;

    printf("%04x %i\n", broj, broj);
    printf("%04x %i\n", b1, b1);
    printf("%04x %i\n", b2, b2);

    return 0;
}