// Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100). Prikažite
// frekvenciju pojavljivanja svih elemenata.
// Unesite n : 7
// Unesite 1. broj : 4
// Unesite 2. broj : 5
// Unesite 3. broj : 2
// Unesite 4. broj : 4
// Unesite 5. broj : 4
// Unesite 6. broj : 2
// Unesite 7. broj : 3
// Frekvencija pojavljivanja :
// 4 - 3 x
// 5 - 1 x
// 2 - 2 x
// 3 - 1 x

#include <stdio.h>

int main(void){

    int polje1[100];
    int n;
    int i;
    int j;
    int brPonavljanja;

    n = 0;
    while(n < 1 || n > 100){
        printf("Unesite broj rezultata: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("Unesite %d. rezultat: ", i + 1);
        scanf("%d", &polje1[i]);
    }

    printf(("Frekevencija pojavljivanja:\n"));
    for(i = 0; i < n; i++){
        brPonavljanja = 0;
        for(j = 0; j < n; j++){
            if(polje1[j] == polje1[j]){
                brPonavljanja++;
            }
        }
        printf("%d - %dx\n", polje1[i], brPonavljanja);
    }

    return 0;
}