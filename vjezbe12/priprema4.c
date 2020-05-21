// Što će se prikazati izvršavanjem navedenog programa?

#include <stdio.h>

void func ( int polje []) {
    polje [0] = 12;
}

int main ( void ) {
    int p[10] = { 0 , 0 , 0 };
    func(p);
    printf("%d", p[0]);
    return 0;
}
