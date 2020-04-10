// Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100) u polje.
// U drugo polje prekopirajte samo parne elemente prvog polja. Prikažite oba polja. Napomena: u
// drugom polju broj elemenata može biti manji od n.
// Unesite n : 5
// Unesite 1. broj : 4
// Unesite 2. broj : 8
// Unesite 3. broj : 3
// Unesite 4. broj : 5
// Unesite 5. broj : 2
// Prvo polje :
// 4 8 3 5 2
// Drugo polje :
// 4 8 2

#include <stdio.h>

int main(void){

    int polje1[100];
    int polje2[100];
    int n;
    int i;
    int j;

    n = 0;
    while(n < 1 || n > 100){
        printf("Unesite broj rezultata: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("Unesite %d. rezultat: ", i + 1);
        scanf("%d", &polje1[i]);
    }

    j = 0;
    for(i = 0; i < n; i++){
        if(polje1[i] % 2 == 0){
            polje2[j++] = polje1[i];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", polje1[i]);
    }

    printf("\n");

    for(i = 0; i < j; i++){
        printf("%d ", polje2[i]);
    }

    return 0;
}