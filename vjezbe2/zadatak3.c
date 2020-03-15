// Izradite program koji će sadržavati dvije cjelobrojne varijable i dvije varijable s decimalnim
// vrijednostima. Inicijalizirajte sve varijable i prikažite njihove vrijednosti u sljedećem obliku:
// Prva cjelobrojna vrijednost: 12
// Druga cjelobrojna vrijednost : 24
// Prva decimalna vrijendost: 3.456
// Druga decimalna vrijendost: 78.23

#include <stdio.h>

int main(void){

    int integer1;
    int integer2;
    float float1;
    float float2;

    integer1 = 12;
    integer2 = 24;

    float1 = 3.456;
    float2 = 78.23;

    printf("Prva cjelobrojna vrijednost: %d\n", integer1);
    printf("Druga cjelobrojna vrijednost: %d\n\n", integer2);

    printf("Prva decimalna vrijednost: %.3f\n", float1);
    printf("Prva decimalna vrijednost: %.2f\n", float2);

    return 0;
}