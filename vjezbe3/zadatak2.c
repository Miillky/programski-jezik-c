// Izradite program koji učitava troznammenkasti broj sa standardnog ulaza (unesena vrijedost će
// uvijek biti troznamenkasta). Program treba prikazati znamenke stotica, desetica i jedinica svaku u poseban
// red na standardnom izlazu, te broj tih znamenki.

#include <stdio.h>

int main(void){

    int broj;
    int zbroj = 0;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    while(broj){
        printf("%d\n", broj % 10);
        zbroj += broj % 10;
        broj /= 10;
    }

    printf("Zbroj: %d", zbroj);
    return 0;
}