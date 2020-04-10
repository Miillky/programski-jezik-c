// Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100) u polje.
// Izmijenite polje tako da sve unesene 0 prebacite iza svih drugih unesenih vrijednosti. Prikažite
// sve elemente polja.
// Unesite n : 7
// Unesite 1. broj : 4
// Unesite 2. broj : 5
// Unesite 3. broj : 0
// Unesite 4. broj : 7
// Unesite 5. broj : 0
// Unesite 6. broj : 3
// Unesite 7. broj : 1
// 4 5 7 3 1 0 0

#include <stdio.h>

int main(void){

    int polje1[100];
    int n;
    int i;
    int tmp;

    n = 0;
    while(n < 1 || n > 100){
        printf("Unesite broj rezultata: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("Unesite %d. rezultat: ", i + 1);
        scanf("%d", &polje1[i]);
    }

    for(i = 0; i < n-1; i++){
        if(polje1[i] == 0){
            tmp = polje1[i];
            polje1[i] = polje1[i+1];
            polje1[i+1] = tmp;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d", polje1[i]);
    }

    return 0;
}