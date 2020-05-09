// Izradite funkciju koja vraća najveću vrijednost unutar cjelobrojnog polja.
// int najveciUPolju ( int p [] , int n );

#include "stdio.h"

int najveciUPolju(int p[], int n){
    int max;
    int i;

    max = p[0];
    for(i = 1; i < n; i++){
        max = p[i];
    }

    return max;
}

int main(void){

    int polje[5] = { 7, 4, 20, 25, 4 };
    int najveci;
    najveci = najveciUPolju(polje, 5);
    printf("Najveci element: %d", najveci);

    return 0;
}