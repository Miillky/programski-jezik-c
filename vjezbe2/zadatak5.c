// Izradite program koji omogućava s tipkovnice unos dvije cjelobrojne vrijednosti. U dodatne
// varijable pohranite vrijenosti zbroja, razlik, umnoška i kvocijenta te dvije cjelobrojne vrijednosti.
// Rezultate prikažite u zasebnim redovima.

#include <stdio.h>

int main(void){

    int vrijednost1, vrijednost2;
    int zbroj, razlika;
    float umnozak, kvocijent;

    printf("Unesite cjelobrojnu vrijednost 1: ");
    scanf("%d", &vrijednost1);
    printf("Unesite cjelobrojnu vrijednost 2: ");
    scanf("%d", &vrijednost2);

    zbroj = vrijednost1 + vrijednost2;
    razlika = vrijednost1 - vrijednost2;
    umnozak = (float)vrijednost1 * (float)vrijednost2;
    kvocijent = (float)vrijednost1 / (float)vrijednost2;

    printf("Zbroj: %d\n", zbroj);
    printf("Razlika: %d\n", razlika);
    printf("Umnožak: %f.1\n", umnozak);
    printf("Kvocijent: %f\n", (float)kvocijent);

    return 0;
}