// Izradite program koji omogućava unos dva broja s tipkovnice. Prikazati sve neparne brojeve i sve
// brojeve koji su djeljivi s 3, od jednog do drugog unesenog broja.

#include <stdio.h>

int main(){

    int broj1;
    int broj2;
    int i;

    printf("Unesite broj1: ");
    scanf("%d", &broj1);

    printf("Unesite broj2: ");
    scanf("%d", &broj2);

    for( i = broj1; i <= broj2; i++){
        if( i % 2 == 1 && i % 3 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}