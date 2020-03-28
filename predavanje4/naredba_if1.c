#include <stdio.h>

int main(){

    int x;

    printf("Unesite broj x ");
    scanf("%d", &x);

    if(x > 0) printf("Vrijednost %d je veca od nule\n", x);
    if(x < 0) printf("Vrijednost %d je manja od nule\n", x);
    if(x == 0) printf("Vrijednost %d je jednaka od nule\n", x);

    return 0;
}