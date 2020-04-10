// 7. zadatak:
// Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100). U
// drugo polje prekopirajte elemente samo ako se oni još ne nalaze u drugom polju. Prikažite drugo
// polje.
// Unesite n : 7
// Unesite 1. broj : 4
// Unesite 2. broj : 5
// Unesite 3. broj : 2
// Unesite 4. broj : 4
// Unesite 5. broj : 4
// Unesite 6. broj : 2
// Unesite 7. broj : 3
// Drugo polje :
// 4 5 2 3

#include <stdio.h>

int main(void){

    int polje1[100];
    int polje2[100];
    int n;
    int i;
    int j;
    int velicinaDrugogPolja;
    _Bool postoji;

    n = 0;
    while(n < 1 || n > 100){
        printf("Unesite broj rezultata: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("Unesite %d. rezultat: ", i + 1);
        scanf("%d", &polje1[i]);
    }

    velicinaDrugogPolja = 0;
    for(i = 0; i < n; i++){
        postoji = 0;
        for(j = 0; j < velicinaDrugogPolja; j++){
            if(polje2[j] == polje1[i]){
                postoji = 1;
                break;
            }
        }
        if(postoji == 0){
            polje2[velicinaDrugogPolja++] = polje1[i];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", polje1[i]);
    }

    printf("\n");

    for(i = 0; i < velicinaDrugogPolja; i++){
        printf("%d ", polje2[i]);
    }

    return 0;
}