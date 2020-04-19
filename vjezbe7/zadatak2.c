// Izradite program koji omogućava unos prirodnog broja n (n će uvijek biti manji ili jednak od 10
// i nije potrebno provjeravati da li se uneseni broj nalazi u zadanim granicama). Deklarirajte i
// inicijalizirajte jediničnu matricu (dvodimenzionalno polje) veličine n. Prikažite matricu.
// Unesite n : 4
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1


#include "stdio.h"

int main(void){

    int matrica[10][10] = { 0 };
    int i;
    int j;
    int n;

    printf("Unesite n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if( i == j ){
                matrica[i][j] = 1;
            } else {
                matrica[i][j] = 0;
            }
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}