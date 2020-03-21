#include <stdio.h>

int main(){
    int l_broj1 = 4; //binarno 0100
    int l_broj2 = 5; //binarno 0101
    int rezultat1 = l_broj1 >> 1;
    int rezultat2 = l_broj2 >> 1;
    printf("Rezultat1 je %d\n", rezultat1);
    printf("Rezultat2 je %d\n", rezultat2);
    return 0;
}