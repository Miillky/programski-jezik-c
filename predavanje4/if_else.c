#include <stdio.h>

int main(){

    int l_ocjena;
    printf("Unesite konacnu oocjenu iz predmeta: ");
    scanf("%d", &l_ocjena);

    if(l_ocjena >= 2){
        printf("Predmet je polozen!\n");
    } else {
        printf("Nazalost, predmet nije polozen!\n");
    }

    return 0;
}