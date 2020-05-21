// Što će se prikazati izvršavanjem navedenog programa?

# include <stdio.h>
void func(int *a) {
    (*a)++;
}

int main ( void ) {
    int a = 2;
    int *p;
    p = &a;
    func (&a);
    printf("%d\n", a);
    printf("%d\n", *p);
    return 0;
}