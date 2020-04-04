// Izradite program koji učitava brojeve s tipkovnice sve dok se ne unese broj 0. Prikazati maksimalni
// i minimalni uneseni broj. (Broj 0 se ne smije uračunavati kao minimalni/maksimalni broj).

#include <stdio.h>

int main(){

    int broj;
    int max;
    int min;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    min = broj;
    max = broj;

    while(broj != 0){

        printf("Unesite broj: ");
        scanf("%d", &broj);

        if(broj == 0){
            break;
        }

        if(broj > max){
            max = broj;
        }

        if(broj < min){
            min = broj;
        }

    }

    printf("Max je: %d\n", max);
    printf("Min je: %d\n", min);

    return 0;
}