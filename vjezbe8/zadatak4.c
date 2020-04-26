// Prvi zadatak proširite tako da prikažete ime “naopačke”.
// Unesite Vase ime : Linus
// Vase ime je : suniL

#include "stdio.h"
#include "string.h"

int main(void){

    char ime[40];
    int i;

    printf("Unesite Vase ime: ");
    scanf("%s", ime);  // ime == &ime[0]

    printf("Vase ime: %s\n", ime);

    for (i = strlen(ime) - 1; i >= 0; i--) {
        printf("%c", ime[i]);
    }

    return 0;
}