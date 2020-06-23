// Izmijenite program iz prošlog zadatka tako da program na kraju u datoteku izlaz.txt zapiše
// koliko je studenata u ulaznoj datoteci, u obliku:
// Broj studenata: 24

#include "stdio.h"

#include "stdio.h"

int main(){

    char prezime[20];
    int brojStudenata;
    FILE* ulaz = fopen("/home/vedran/Documents/faks/računarstvo/godina1/programski jezik c/programski-jezik-c/vjezbe14/studenti.txt", "r");
    FILE* izlaz = fopen("/home/vedran/Documents/faks/računarstvo/godina1/programski jezik c/programski-jezik-c/vjezbe14/izlaz.txt", "w");

    brojStudenata = 0;
    while (fscanf(ulaz, "%s", prezime) == 1) {
        printf("Prezime: %s\n", prezime);
        brojStudenata++;
    }

    fprintf(izlaz, "Broj studenata je: %d\n", brojStudenata);

    printf("Broj studenata je: %d\n", brojStudenata);

    fclose(ulaz);
    fclose(izlaz);

    return 0;
}