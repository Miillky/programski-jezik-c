// Izradite funkciju koja vraća najveću vrijednost od tri predana parametra. Prototip funkcije je:
// int najveci ( int , int , int );

#include "stdio.h"

int najveci(int a, int b, int c){
    if(a > b && a > c){
        return a;
    } else if(b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main(void){

    printf("Najveci je: %d", najveci(5, 8, 3));

    return 0;
}