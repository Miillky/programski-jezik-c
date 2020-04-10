#include <stdio.h>

int main(void){

    int vrijednost[5];
    int suma;
    int i;

    for(i = 0; i < 5; i++){
        printf(("Unesite %d vrijednost: ", i+1));
        scanf("%d", &vrijednost[i]);
    }

    suma = 0;
    for(i = 0; i < 5; i++){
        suma = suma + vrijednost[i];
    }

    printf("Suma: %d", suma);

    return 0;
}