// Prvi zadatak proširite tako da između svakog znaka prikažete razmak. Uputa: potrebno je pomoću
// petlje prikazivati znak po znak i nakon svakog znaka prikazati razmak.
// Unesite Vase ime : Linus
// Vase ime je : L i n u s

#include "stdio.h"
#include "string.h"

int main(void){

    char ime[40];
    int i;

    printf("Unesite Vase ime: ");
    scanf("%s", ime);  // ime == &ime[0]

    printf("Vase ime: %s\n", ime);

    for (i = 0; i < strlen(ime); i++) {
        printf("%c ", ime[i]);
    }

    return 0;
}