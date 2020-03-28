// Izradite program koji će omogućiti pretvorbu temperature iz jedne mjerne
// jedinice u drugu. Program mora prikazati izbornik u kojem se može odabrati željena pretvorba:
// Pretvorba temperature
// Izbornik :
// 1. Fahrenheit u Celzius
// 2. Celzius u Fahrenheit
// Upisite Vas odabir : 1
// Unesite vrijednost u F : 70
// Vrijednost u Celziusima : 21.1 C
// Ukoliko korisnik prilikom odabira upiše broj koji nije jednak 1 ili 2, program mora prikazati
// Neispravan unos te izvođenje programa završava.

#include <stdio.h>

int main(){

    int odabir;
    float f;
    float c;

    printf("Pretvorba temperature\n\n");

    printf("Izbornik:\n");
    printf("1. Fahreheit u Celzius\n");
    printf("2. Celzius u Fahreheit\n\n");

    printf("Upisite Vas odabir: ");
    scanf("%d", &odabir);

    switch (odabir){
        case 1:
            printf("Unesite vrijednost u F: ");
            scanf("%f", &f);
            c = (f-32) / 1.8;
            printf("Vrijednost u Cezlziusima: %.1f C", c);
            break;
        case 2:
            printf("Unesite vrijednost u C: 3");
            scanf("%f", &c);
            f = c * 1.8 + 32;
            printf("Vrijednost u Farenheitima: %.1f F", f);
            break;
        default:
            printf("Neispravan unos");
            break;
    }

    return 0;
}