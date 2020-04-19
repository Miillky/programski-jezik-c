// Izradite program koji deklarira i inicijalizira dvodimenzionalno polje kao što je prikazano. Neka
// program pomoću petlji prikaže sve vrijednosti polja na prikazan način.
// 1 2 3
// 4 5 6
// 7 8 9

#include "stdio.h"

#define N 3

int main(void){

    int i;
    int j;

    int polje[N][N] = {
        { 1, 2, 3 },
        { 7, 8, 9 } ,
        { 7, 8, 9 }
    };

    for(i = 0; i < N; i++){
        // prikzemo sve elemente po stupcima, za trenutni redak
        for(j = 0; j < N; j++){
            printf("%d ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}