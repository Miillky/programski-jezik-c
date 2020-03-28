#include <stdio.h>

int main(){

    int l_broj;

    printf("Unesite prirodan broj ");
    scanf("%d", &l_broj);

    if( l_broj < 1 ){
        printf("Broj %d nije prirodan broj.\n", l_broj);
        return  -1;
    }

    if( l_broj % 2 == 0){
        printf("Broj %d je paran broj\n", l_broj);
    }

    if( l_broj % 2 == 1){
        printf("Broj %d je neparan broj\n", l_broj);
    }

    return 0;
}