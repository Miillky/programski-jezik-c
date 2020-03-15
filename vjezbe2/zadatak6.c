// Napišite program koji će pretvarati sate, minute i sekunde u ukupan broj seknudi. Program mora
// omogućiti unos broja sati, minuta i sekunda s tipkovnice. Program treba prikazati rezultat u sljedećem obliku:
// Ukupan broj seknudni: 2983.

#include <stdio.h>

int main(void){

    int sati, minute, sekunde, ukupnoSekundi;

    printf("Unesite sate: ");
    scanf("%d", &sati);
    printf("Unesite minute: ");
    scanf("%d", &minute);
    printf("Unesite sekunde: ");
    scanf("%d", &sekunde);

    ukupnoSekundi = sati * 60 * 60;
    ukupnoSekundi = ukupnoSekundi + (minute * 60);
    ukupnoSekundi = ukupnoSekundi + sekunde;

    printf("Ukupan broj sekundi: %d.", ukupnoSekundi);

    return 0;
}