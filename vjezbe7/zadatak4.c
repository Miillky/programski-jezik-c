// Učitati vrijednosti za broj redaka n i broj stupaca m dvodimenzionalnog cjelobrojnog polja.
// Ne treba provjeravati jesu li upisane ispravne vrijednosti (n[1,10], m[1,10]). Po retcima učitati
// vrijednosti članova dvodimenzionalnog cjelobrojnog polja od m redaka i n stupaca. Nakon što su
// sve vrijednosti upisane, pronaći i prikazati indekse najmanjih članova u svakom stupcu.
// Unesite n : 2
// Unesite m : 3
// Unesite element za 1. red i stupac: 3
// Unesite element za 1. red i stupac: 2
// Unesite element za 1. red i stupac: 5
// Unesite element za 2. red i stupac: 1
// Unesite element za 2. red i stupac: 8
// Unesite element za 2. red i stupac: 4
// 1. redak : indeks najmanjeg: 1
// 2. redak : indeks najmanjeg: 0

#include "stdio.h"

int main(void){

    int matrica[10][10];
    int n;
    int m;
    int i;
    int j;
    int min;
    int index;

    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite m: ");
    scanf("%d", &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Unesite element za %d. red i %d. stupac: ", i+1, j+1);
            scanf("%d", &matrica[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        min = matrica[i][0];
        index = 0;
        for (j = 0; j < m; j++) {
            if( min > matrica[i][j] ) {
                min = matrica[i][j];
                index = j;
            }
        }
        printf("%d. redak: indeks najmanjeg: %d\n", i+1, index);
    }
    return 0;
}