// Izradite program koji omogućava unos rezultata (bodova) kolokvija koji su studenti ostvarili na
// kolokviju. Program mora prvo omogućiti unos cjelobrojne vrijednosti koja definira koliko će se
// rezultata (bodova) upisati. Neka ukupan broj rezultata koji je moguće unijeti ne bude veći od 100.
// Ukoliko korisnik unese broj koji je veći od 100, ponoviti unos dok se ne unese ispravna vrijednost.
// Nakon svih unesenih rezultata, prikazati prosječan broj bodova i maksimalan broj bodova ostvaren
// na kolokviju.
// Unesite broj rezultata : 3
// Unesite 1. rezultat : 4.5
// Unesite 2. rezultat : 8
// Unesite 3. rezultat : 5.2
// Prosjecan broj bodova : 5.90
// Maksimalan broj bodova : 8.00

#include <stdio.h>

int main(void){

    float rezultati[100];
    int n;
    int i;
    float suma;
    float prosjek;
    float maksimum;

    n = 0;
    while(n < 1 || n > 100){
        printf("Unesite broj rezultata: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++){
        printf("Unesite %d. rezultat: ", i + 1);
        scanf("%f", &rezultati[i]);
    }

    // izracunavanje prosjeka
    suma = 0;
    for(i = 0; i < n; i++){
        suma = suma + rezultati[i];
    }

    prosjek = suma / n;
    printf("Prosjecan broj bodova: %.2f\n", prosjek);

    // izracunavanje maksimuma
    maksimum = rezultati[0];
    for(i = 0; i < n; i++){
        if( maksimum < rezultati[i] ){
            maksimum = rezultati[i];
        }
    }
    printf("Maksimalan broj bodova: %.2f\n", maksimum);

    return 0;
}