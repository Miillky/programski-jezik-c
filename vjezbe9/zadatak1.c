// Izradite funkciju prikaziVarijablu koja prikazuje cjelobrojnu vrijednost u obliku: Vrijednost
// varijable: 23. Prototip funkcije je:
// void prikaziVarijablu ( int );
// U main funkciji provjerite rad funkcije.

#include "stdio.h"

void prikaziVarijablu(int vrijednost){
    printf("Vrijednost varijable: %d", vrijednost);
}

int main(void){

    prikaziVarijablu(23);

    return 0;
}