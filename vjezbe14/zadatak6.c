// U datoteci studenti.txt se nalaze imena studenata u obliku:
// • prezime
// Izradite program koji će pročitati prezimena svih studenata zapisanih u datoteci studenti.txt i
// prikazati ih na ekranu u obliku “Prezime”. Na kraju neka program prikaže koliko je studenata
// zapisano u datoteci.

#include "stdio.h"

int main(){

    char prezime[20];
    int brojStudenata;
    FILE* ulaz = fopen("/home/vedran/Documents/faks/računarstvo/godina1/programski jezik c/programski-jezik-c/vjezbe14/studenti.txt", "r");

    brojStudenata = 0;
    while (fscanf(ulaz, "%s", prezime) == 1) {
        printf("Prezime: %s\n", prezime);
        brojStudenata++;
    }

    printf("Broj studenata je: %d\n", brojStudenata);

    fclose(ulaz);

    return 0;
}