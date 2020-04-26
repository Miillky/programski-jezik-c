// Omogućite unos teksta maksimalne duljine 100 znakova. Prebrojite broj riječi koji se nalaze u
// tekstu, te prikažite uneseni tekst sa svim velikim slovima, bez obzira kako je uneseno. Uputa:
// riječi su odvojene jednim razmakom. Dovoljno je prebrojati razmake + 1 kako bi dohvatili broj
// riječi. Za prikaz velikih slova potrebno je prikazivati znak po znak i prikazivati ih koristeći toupper
// funkciju: http://www.cplusplus.com/reference/cctype/toupper/
// Unesite tekst : Danas je lijep dan !
// Broj rijeci : 4
// Uneseni tekst s velikim slovima :
// DANAS JE LIJEP DAN !

#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main(void) {
    char tekst[101];
    int brojRijeci;
    int i;

    printf("Unesite tekst: ");

    gets(tekst);

    brojRijeci = 1;
    for (i = 0; i < strlen(tekst); i++) {
        if (tekst[i] == ' ') {
            brojRijeci++;
        }
    }

    // prebrojite samoglasnike
    /* for (i = 0; i < strlen(tekst); i++) {
      if (tekst[i] == 'a' || tekst[i] == 'e' || ...) {
        brojRijeci++;
      }
    } */

    printf("Broj rijeci je: %d\n", brojRijeci);

    printf("Uneseni teskt s velikim slovima: \n");

    for (i = 0; i < strlen(tekst); i++) {
        printf("%c", toupper(tekst[i]));
    }
    // tolower -> vratiti malo slovo

    return 0;
}