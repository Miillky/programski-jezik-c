// Napisati funkciju koja “vraća” rezultat zbrajanja i množenja dvije cjelobrojne vrijednosti pomoću
// dva pokazivača. Prototip funkcije je:
// void zbrojiIMnozi(int a, int b, int *zbroj, int *umnozak);

#include "stdio.h"

void zbrojiIMnozi(int a, int b, int *zbroj, int *umnozak){
    *zbroj = a + b;
    *umnozak = a * b;
}

int main(void){

    int zbroj;
    int umnozak;

    zbrojiIMnozi(12, 18, &zbroj, &umnozak);

    printf("Zbroj je: %d\n", zbroj);
    printf("Umnozak je: %d\n", umnozak);

    return 0;
}