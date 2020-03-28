#include <stdio.h>

int main(){

    int l_broj;
    printf("Unesite broj ");

    scanf("%d", &l_broj);

    if( l_broj =0){
        printf("Broj %d nije pridoan broj. \n", l_broj);
    }
    printf("Ispis na kraju, broj je %d\n", l_broj);

    return 0;
}