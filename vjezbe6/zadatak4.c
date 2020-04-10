// Izradite program koji omogućava unos s tipkovnice 10 decimalnih brojeva. Nakon unosa svih deset
// vrijednosti, obrnuti redoslijed podataka unutar polja. Nakon što je poredak elemenata u
// polju promijenjen, prikazati redom vrijednosti u polju odvojene zarezom i razmakom (s točkom
// na kraju).
// Unesite 1. element : 5.2
// Unesite 2. element : -7.9
// ...
// Unesite 9. element : 4.5
// Unesite 10. element : 11.22
// 11.22 , 4.5 , 81.045 , 77.9 , -42.445 , 500 , 12 , 8.2 , -7.9 , 5.2.

#include <stdio.h>

int main(void){

    int polje[10];
    int i;
    int tmp;

    for(i = 0; i < 10; i++){
        printf("Unesite %d. element: ", i + 1);
        scanf("%d", &polje[i]);
    }

    for(i = 0; i < 5; i++){
        tmp = polje[i];
        polje[i] = polje[9-i];
        polje[9-i] = tmp;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", polje[i]);
    }

    return 0;
}