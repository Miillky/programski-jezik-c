#include <stdio.h>

int main(void){
    int broj;
    float decimalni;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    printf("Unesite broj i decimalni broj: ");
    scanf("%d %f", &broj, &decimalni);

    printf("%d %f\n", broj, decimalni);

    return 0;
}