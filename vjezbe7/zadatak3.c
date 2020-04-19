// Izradite program koji omogućava unos prirodnog broja n i m (n[1,10], m[1,10]). Deklarirajte i
// inicijalizirajte dvodimenzionalno polje veličine n * m. Vrijednosti elemenata neka budu redom od
// 1 nadalje.
// Unesite n : 3
// Unesite m : 5
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15

#include "stdio.h"

int main(void){

    int matrica[10][10];
    int n;
    int m;
    int i;
    int j;

    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite m: ");
    scanf("%d", &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            matrica[i][j] = i * m + j + 1;
            printf("%3d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}