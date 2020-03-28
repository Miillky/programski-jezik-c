// Napisati program koji će s tipkovnice učitati dva realna broja x i y. Ispisati poruku Istina je
// ako je barem jedan od brojeva u zatvorenom intervalu [5, 20] i pri tome je x manji od y. Inače,
// ispisati poruku Nije istina.

#include <stdio.h>

int main(){

    int x;
    int y;

    printf("Unesite prvi broj: " );
    scanf("%f", &x);

    printf("Unesite drugi broj: " );
    scanf("%f", &y);

    if( (x >= 5.0 && x <= 20.0) && (x < y) ){
        printf("Istina je");
    } else if ( (y >= 5.0 && y <= 20.0) && (x < y)){
        printf("Istina je");
    } else {
        printf("Nije istina");
    }

    return 0;
}