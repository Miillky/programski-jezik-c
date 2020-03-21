#include <stdio.h>

int main(){
    int l_broj1 = 4; // binarno 0100
    int l_broj2 = 5; // binarno 0101
    int rezultat = l_broj1 & l_broj2;
    printf("Rezultat je %d\n", rezultat);
    return 0;
};