// Koristeći funkciju iz prethodnog zadatka, prikažite tekst od prvog pojavljivanja znaka A do kraja.
// Ukoliko nema slova A u stringu, ne prikazujte ništa. Npr.: za tekst “DobAr dan”, program
// mora prikazati “Ar dan”. Za tekst “Dobar dan” ne prikazuje ništa.

#include "stdio.h"

char* pronadiA(char *tekst){

    while(*tekst != '\0'){
        if(*tekst == 'A'){
            return tekst;
        }
        tekst++;
    }
    return NULL;
}

int main(void){

    char tekst[] = "DobAr dan";
    int *p = NULL;

    p = pronadiA(tekst);

    if(p){
        printf("%s", p);
    }

    return 0;
}