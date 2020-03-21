#include <stdio.h>

int main(void){
    int broj;

    broj = 257;

    printf("%10d\n", broj);
    printf("%-10dtekst\n", broj);
    printf("%010d\n", broj);

    return 0;
}