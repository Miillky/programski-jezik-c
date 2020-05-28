// Izradite funkciju koja generira slučajan broj u rasponu definiran parametrima. Funkcija mora
// dinamički alocirati memoriju za navedeni broj i vratiti pokazivač na stvoreni slučajan broj.
// Funkcija vraća NULL ukoliko iz bilo kojeg razloga nije uspjelo stvaranje slučajnog broja. Prototip
// funkcije je:
// int* slucajan(int od, int do);
// U glavnoj funkciji prikažite korištenje navedene funkcije.

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int* slucajan(int odBroja, int doBroja) {
    int *slucajanBroj = (int*)malloc(sizeof(int));
    if (slucajanBroj == NULL) {
        return NULL;
    }

    srand(time(0));
    *slucajanBroj = rand() % (doBroja - odBroja) + odBroja;

    return slucajanBroj;
}

int main(void){

    int *broj = NULL;

    broj = slucajan(100, 200);

    if (broj) {
        printf("Slucajan broj: %d\n", *broj);
    } else {
        printf("Nisam uspio generirati slucajan broj\n");
    }

    return 0;
}