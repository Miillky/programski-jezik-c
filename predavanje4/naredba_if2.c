#include <stdio.h>

int main(){

    int x, y, z;
    printf("Unesite broj x ");
    scanf("%d", &x);

    printf("Unesite broj y ");
    scanf("%d", &y);

    if(x > 0){
        z = x + y;
        printf("Suma ulaznih parametara z = %d\n", z);
    }

    if(x < 0){
        z = x - y;
        printf("Razlika ulaznih parametara z = %d\n");
    }

    if(x == 0) printf("Vrijednost x je jenaka nula i ne radi ništa\n", x);

    return 0;
}