// S tipkovnice učitati cijeli broj n iz intervala [1, 10]. Ako broj nije ispravno upisan, ponavljati unos
// sve dok se ne upiše ispravna vrijednost. Ako je broj ispravno upisan, prikazati jediničnu matricu
// reda n. Jedinična matrica reda n se može predstaviti tablicom od n redaka i n stupaca u kojima
// se vrijednost 1 nalazi na glavnoj dijagonali, a vrijednost 0 na svim ostalim mjestima. Primjer
// izvršavanja programa:
//  Unesite broj od 1 do 10: 12
//  Neispravan broj !
//  Unesite broj od 1 do 10: 6
//  1 0 0 0 0 0
//  0 1 0 0 0 0
//  0 0 1 0 0 0
//  0 0 0 1 0 0
//  0 0 0 0 1 0
//  0 0 0 0 0 1

#include <stdio.h>

int main(){

    int n;
    int i;
    int j;

    do {
        printf("Unesite n iz intervala [1, 10]: ");
        scanf("%d", &n);
    } while(n < 1 || n >10);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}