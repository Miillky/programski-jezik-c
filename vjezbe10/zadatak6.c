// Izradite funkciju koja provjerava da li je tekst palindrom (palindrom je tekst/riječ koja obrnutim
// redoslijedom sloba ima jednako značenje). Ukoliko je tekst palindrom, funkcija vraća 1, inače
// vraća 0. U main funkciji provjerite rad funkcije palindrom. Prototip funkcije je:
// int palindrom ( char []);
// Primjer palindroma: kajak, oko, racecar...

#include "stdio.h"
#include "string.h"

int palindrom(char tekst[]){
    int i;

    for(i = 0; i < strlen(tekst) / 2; i++){
        if(tekst[i] != tekst[strlen(tekst) - 1 - i]){
            return 0;
        }
    }

    return 1;
}

int main(void){

    char tekst[] = "kajak";
    int rezultat;

    rezultat = palindrom(tekst);
    if (rezultat == 1) {
        printf("Tekst je palindrom!\n");
    } else {
        printf("Tekst NIJE palindrom!\n");
    }

    return 0;
}