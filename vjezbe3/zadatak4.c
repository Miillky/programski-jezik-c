// Izmjenite prošli zadatak da da napište mikro naredbu(e) koja će izračunavati porez.
// Stopu poreza je i dalje potrebno moći postaviti koristeći #define

#include <stdio.h>

#define POREZ 25
#define stopa(cijena, porez) cijena * porez/100

int main(void){

    int porez = POREZ;
    float cijena;
    printf("Unesite cijenu artikla: ");
    scanf("%f", &cijena);

    float cijena_pdv = stopa(cijena, porez);

    printf("Unesena cijena artikla: %.2f\n", cijena);
    printf("-----------------------------\n");
    printf("Cijena: %21.2f\n", cijena);
    printf("Porez(%d%%): %17.2f\n", POREZ, cijena_pdv);
    printf("-----------------------------\n");
    printf("Ukupno: %21.2f\n", cijena + cijena_pdv);
    return 0;
}