// Omogućite unos dva imena. Koristeći funkciju strcmp definiranu unutar string.h zaglavlja,
// usporedite dva imena i prikažite da li su ta dva imena ista. Primjer korištenja strcmp funkcije
// možete pogledati na: http://www.cplusplus.com/reference/cstring/strcmp/
// Unesite prvo ime : Linus
// Unesite drugo ime : Linus
// Imena su ista !

#include "stdio.h"
#include "string.h"

int main(void){

    char ime1[40];
    char ime2[40];

    printf("Unesite prvo ime: ");
    scanf("%s", ime1);

    printf("Unesite drugo ime: ");
    scanf("%s", ime2);

    if (strcmp(ime1, ime2) == 0) {
        printf("Imena su ista!\n");
    } else {
        printf("Imena NISU ista!\n");
    }

    return 0;
}