// Sljedeći program sadrži grešku. Koja je greška?

# include <stdio.h>

int main(void) {

    int a = 10 , *p1 = &a , b = 20 , *p2 , c ;
    c = *p1 + *p2; // p2 nije inicijalizirac

    printf("c = %d " , c);

    return 0;
}