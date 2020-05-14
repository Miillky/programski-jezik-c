//Što će se prikazati izvršavanjem navedenog programa?

# include <stdio.h>

int main ( void ) {

    int a = 10 , b = 20 , *c = &a , *d = & b ;

    c = &b;
    d = &a;

    *c = *d + 5;
    *d = *c + 3;

    printf("%d %d %d %d\n ", a, b, *c + 1 , *d + 1);

    return 0;
}