// Izradite program koji omogućava unos imena korisnika s tipkovnice. Prikažite uneseno ime.
// Unesite Vase ime : Linus
// Vase ime je : Linus

#include <stdio.h>

int main(void){

    char ime[40];

    printf("Unesite Vase ime: ");
    scanf("%s", ime);  // ime == &ime[0]

    printf("Vase ime: %s", ime);

    return 0;
}