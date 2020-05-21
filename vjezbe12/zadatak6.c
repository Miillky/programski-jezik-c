// Izradite funkciju koja pronalazi prvo pojavljivanje znaka A unutar stringa. Funkcija vraća
// pokazivač na znak unutar polja ukoliko je znak pronađen, ili vraća NULL ukoliko se znak A
// ne nalazi unutar stringa.

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

    char tekst[] = "ProbniAtekst";
    int *p = NULL;

    p = pronadiA(tekst);

    if(p == NULL){
        printf("Nema slova A u tekstu!");
    } else {
        printf("Slovo A se nalazi u tekstu, adresa je: %d", p);
    }

    return 0;
}