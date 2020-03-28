// Napisati program koji će s tipkovnice učitati dva cijela broja x i y. Ako je x barem za 100 veći od
// y i pri tome je y ili paran ili negativan, ispisati poruku Istina je. Inače, ne ispisati ništa.

#include <stdio.h>

int main(){

    int x;
    int y;

    printf("Unesite prvi broj: " );
    scanf("%d", &x);

    printf("Unesite drugi broj: " );
    scanf("%d", &y);

    if( (x +100 > y) && (y % 2 == 0 || y < 0) ){
        printf("Isina je\n");
    }

    return 0;
}