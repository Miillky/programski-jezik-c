// Izmjenite 3. zadatak na način da omogućite unos svih vrijednosti s tipkovnice.
// Potrebno je korisniku napisati uputu kada treba unijeti vrijednost. Primjer ulaza i izlaza programa:

#include <stdio.h>

int main(void){

    int integer1;
    int integer2;
    float float1;
    float float2;

    printf("Unesite prvu cjelobrojnu vrijednost: ");
    scanf("%d", &integer1);
    printf("Unesite drugu cjelobrojnu vrijednost: ");
    scanf("%d", &integer2);

    printf("\n");

    printf("Unesite prvu decimalnu vrijednost: ");
    scanf("%f", &float1);
    printf("Unesite drugu decimalnu vrijednost: ");
    scanf("%f", &float2);

    printf("\n");

    printf("Prva cjelobrojna vrijednost: %d\n", integer1);
    printf("Druga cjelobrojna vrijednost: %d\n\n", integer2);

    printf("Prva decimalna vrijednost: %.3f\n", float1);
    printf("Prva decimalna vrijednost: %.2f\n", float2);

    return 0;
}
