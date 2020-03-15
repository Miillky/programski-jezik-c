// Napište program koji će za uneseni r - radijus kruga izračunati porvršinu kruga.
// Formula za izračun površine kruga: P = r2*π. Program mora prikazati rezultat na stanradni izlaz.

#include <stdio.h>

int main(void){

    float radius;
    double povrsinaKruga;

    printf("Unesite radijus kruga: ");
    scanf("%f", &radius);

    povrsinaKruga = (radius * radius) * 3.14;

    printf("Površina kruga je %.0f", povrsinaKruga);

    return 0;
}