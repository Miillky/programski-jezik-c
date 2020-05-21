// Izradite funkciju koja će prebrojiti broj samoglasnika u nekom stringu. Prototip funkcije je int
// samoglasnici(char *tekst);. U main funkciji prikažite primjer korištenja navedene funkcije.

#include "stdio.h"

int samoglasnici(char *tekst){
    int brojSamoglasnika = 0;

    while(*tekst != '\0'){
        if( *tekst == 'A' || *tekst == 'E' || *tekst == 'I' || *tekst == 'O' || *tekst == 'U' || *tekst == 'a'
            || *tekst == 'e' || *tekst == 'i' || *tekst == 'o' || *tekst == 'u' ){
            brojSamoglasnika++;
        }
        tekst++;
    }

    return brojSamoglasnika;
}

int main(void){

    char tekst[] = "Probnitekst";

    printf("Broj samoglasnika: %d", samoglasnici(tekst));

    return 0;
}