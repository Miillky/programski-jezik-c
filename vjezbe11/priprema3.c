// Sljedeći program sadrži neispravnu naredbu (točno jedna naredba je neispravna. Zašto je neispravna?).
// Što će se prikazati ispravljenim programom?

# include <stdio.h>
int main ( void ) {

    int a = 1, *b = &a;
    short x = 10, y = 20 , *z = &y;

    *b = *z + 1;
    *z = *b + 5; // int u short
    b = &y;

    printf("%d %d %hd %hd %hd\n " , a , *b , x , y , *z);

    return 0;
}