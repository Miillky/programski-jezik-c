// Izradite program koji će za unesenu cijenu određenog artikla ispisati porez te ukupnu cijenu artikla
// (cijena + porez). Sve vrijednosti prikažite na dvije decimale. Pomoću #define preprocesorske
// direktive omogućeite jednostavnu promjena prezne stope. Program također mora prikazati vrijednost porezne
// stope kao štoje je prikazano u primjeru izgleda program. Očekuje se da će prazna stopa uvijek biti dvoznamenkasta vrijednost.

#include <stdio.h>

#define POREZ 25

int main(void){

    int porez = POREZ;
    float cijena;
    printf("Unesite cijenu artikla: ");
    scanf("%f", &cijena);

    float cijena_pdv = cijena * porez/100;

    printf("Unesena cijena artikla: %.2f\n", cijena);
    printf("-----------------------------\n");
    printf("Cijena: %21.2f\n", cijena);
    printf("Porez(%d%%): %17.2f\n", POREZ, cijena_pdv);
    printf("-----------------------------\n");
    printf("Ukupno: %21.2f\n", cijena + cijena_pdv);

    return 0;
}