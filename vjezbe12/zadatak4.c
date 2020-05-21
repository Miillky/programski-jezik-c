// Izradite funkciju koja će izmijeniti string tako da promijeni sva mala slova u velika slova (prisjetite
// se funkcije toupper). Prototip funkcije je void pretvoriUVelikaSlova(char *tekst);. U main
// funkciji prikažite primjer korištenja navedene funkcije.

#include "stdio.h"
#include "ctype.h"

void pretvoriUVelikaSlova(char *p){
    while(*p != '\0'){
        *p = toupper(*p);
        p++;
    }
}

int main(void){

    char tekst[] = "Probnitekst";

    pretvoriUVelikaSlova(tekst);

    printf("Pretvori strin: %s\n", tekst);
    return 0;
}