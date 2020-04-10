// Izradite program koji deklarira polje od 10 cjelobrojnih elemenata. Inicijalizirajte polje na proizvoljne
// vrijednosti te prikažite sve elemente polja odvojene zarezom (osim zadnjeg elementa nakon kojeg
// slijedi točka).
// 5, -7 , 8, 12 ,500, -42 ,77 ,81 ,4 ,11.

#include <stdio.h>

int main(void){

    int polje[10] = {5, -7, 8, 12, 500, -42, 77, 81, 4, 11};
    int i;

    for(i = 0; i < 9; i++){
        printf("%d,", polje[i]);
    }
    printf("%d.", polje[i]);

    return 0;
}