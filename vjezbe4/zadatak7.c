// Napisati program koji će s tipkovnice učitati pet decimalnih brojeva. Ako su barem tri od učitanih
// brojeva veći od nule, ispisati poruku Barem tri su veca od nule, inače ispisati poruku Niti
// tri nisu veca od nule.

#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    float d;
    float e;
    int brojVecih;

    brojVecih = 0;

    printf("Unesite prvi broj: " );
    scanf("%f", &a);

    printf("Unesite drugi broj: " );
    scanf("%f", &b);

    printf("Unesite treci broj: " );
    scanf("%f", &c);

    printf("Unesite cetvrti broj: " );
    scanf("%f", &d);

    printf("Unesite peti broj: " );
    scanf("%f", &e);

    if(a > 0.0) brojVecih++;
    if(b > 0.0) brojVecih++;
    if(c > 0.0) brojVecih++;
    if(d > 0.0) brojVecih++;
    if(e > 0.0) brojVecih++;

    if( brojVecih >= 3){
        printf("Barem tri su veca od nule");
    } else {
        printf("Niti tri nisu veca od nule");
    }

    return 0;
}