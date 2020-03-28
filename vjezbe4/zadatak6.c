// Napisati program koji će s tipkovnice učitati tri cijela broja. Ako su učitane vrijednosti međusobno
// različite i poredane od manjih prema većim ili od većih prema manjim (npr. za učitane brojeve
// -5, 2, 17 ili 6, 3, 1), ispisati poruku Brojevi su poredani i razliciti, inače (npr. za učitane
// brojeve 5, 2, 6 ili 4, 4, 5) ispisati poruku Brojevi nisu poredani ili nisu razliciti.

#include <stdio.h>

int main(){

    int a;
    int b;
    int c;

    printf("Unesite prvi broj: " );
    scanf("%f", &a);

    printf("Unesite drugi broj: " );
    scanf("%f", &b);

    printf("Unesite treci broj: " );
    scanf("%f", &c);

    if( (a < b && b < c) || (a > b && b > c) ){
        printf("Brojevi su poredani i razliciti");
    } else {
        printf("Brojevi nisu poradani ili nisu razliciti");
    }

    return 0;
}