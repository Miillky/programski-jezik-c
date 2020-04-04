// Izradite program koji omogućava unos pozitivnog broja s tipkovnice. Prikazati redom brojeve od
// unesenog broja do uključujući 0. Brojeve odvojiti zarezom. Ne smije biti zarez na kraju.

#include <stdio.h>

int main(){

    int broj;
    int i;

    printf("Unesite pozitivan broj: ");
    scanf("%d", &broj);

    for(i = broj; i >= 1; i--){
        printf("%d,", i);
    }
    printf("%d", i);

    return 0;
}