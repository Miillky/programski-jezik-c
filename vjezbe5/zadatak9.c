// S tipkovnice učitati cijeli broj m iz intervala [1, 10] i cijeli broj n iz intervala [1, 10]. Nije potrebno
// provjeravati jesu li brojevi ispravno upisani. Prikazati tablicu od m redaka i n stupaca. Koji
// brojevi se trebaju nalaziti u tablici i prema kojem formatu se ispisuju, zaključiti na temelju
// primjera izvršavanja programa.
//  Unesite m i n : 5 4
//  4 3 2 1
//  5 4 3 2
//  6 5 4 3
//  7 6 5 4
//  8 7 6 5

#include <stdio.h>

int main(){

    int m;
    int n;

    int i;
    int j;

    printf("Unesite m i n: ");
    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++) {
        for (j = n; j > 0; j--) {
            printf("%d", j + i);
        }
        printf("\n");
    }

    return 0;
}