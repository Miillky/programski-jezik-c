// Izradite program koji će omogućiti unos prirodne cjelobroje vrijednosti
// Očekuje se da korisnik nikan neće ispisati veći broj 1000.
// Odaberite najmanji mogući tip varijable koja može pohraniti takvu vrijednost, i prikažite tu vrijednost u
// dekatskom, heksadekadskom i oktalnom brojevnom sustavu (s vodežim nulama).

#include <stdio.h>

int main(void){

    int broj;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    printf("DEC: %04d\n", broj);
    printf("HEX: %04x\n", broj);
    printf("OCT: %04o\n", broj);

    return 0;
}