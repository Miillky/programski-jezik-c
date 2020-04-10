// Zadano je sljedeće polje: int polje[10] = { 2, 8, -4, 5, 9, -6, 8, 1, 7, -2};. Omogućite
// unos dvije vrijednosti: i (0 do 9) i x (-50 do 50). U polje na mjesto s indeksom i umetnite
// vrijednost x. Prikažite polje.
// Unesite i : 3
// Unesite x : 15
// 2 8 -4 15 5 9 -6 8 1 7

#include <stdio.h>

int main(void){

    int polje[10] = {2, 8, -4, 15, 5, 9, -6, 8, 1, 7};
    int index;
    int i;
    int x;

    printf("Unesite indeks: ");
    scanf("%d", &index);

    printf("Unesite vrijednost x: ");
    scanf("%d", &x);

    for(i = 8; i >= index; i--){
        polje[i+1] = polje[i];
    }

    polje[index] = x;

    for(i = 0; i < 10; i++){
        printf("%3d", polje[i]);
    }

    return 0;
}