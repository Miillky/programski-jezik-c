// S tipkovnice učitati cijeli broj n koji mora biti između 1 i 31 (uključivo s granicama). Ako broj
// nije ispravan, prikazati poruku Broj znamenki je neispravan te ponavljati unos sve dok se ne
// unese ispravan broj. Ako je broj ispravno upisan, prikazati uneseni broj u binarnom obliku.
//  Unesite broj : 12
//  1 1 0 0

#include <stdio.h>

int main(){

    int broj;
    int op;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    if(broj >= 1 && broj <= 31){

        op = 16;
        while(broj > 0 || op != 0){
            if(broj >= op){
                printf("1 ");
                broj = broj - op;
            } else {
                printf("0 ");
            }
            op = op / 2;
        }

    } else {
        printf("Broj je neispravan\n");
    }

    return 0;
}