// Napišite funkciju koja omogućava zamjenu vrijednosti dva decimalna (float) broja.

#include "stdio.h"

void zamjeni(float *a, float *b){
    float tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void){

    float a = 2.3;
    float b = 4.5;

    zamjeni(&a, &b);

    printf("Broj a: %f\n", a);
    printf("Broj b: %f\n", b);

    return 0;
}