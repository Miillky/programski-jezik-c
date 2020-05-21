// Što će se prikazati izvršavanjem navedenog programa?

#include <stdio.h>

void func(int polje []) {
    polje [0] = 12;
}
int main(void) {
    int polje[10] = { 0 , 0 , 0 };
    int *p;
    p = polje;
    p++;
    func (p);
    printf("%d", polje[0]);
    return 0;
}