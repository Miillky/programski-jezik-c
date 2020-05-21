// Što će se prikazati izvršavanjem navedenog programa?

# include <stdio.h>
void func ( int a ) {
    a ++;
}

int main ( void ) {
    int a = 2;
    func(a);
    printf("%d\n", a );
    return 0;
}