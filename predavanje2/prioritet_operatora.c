#include <stdio.h>

int main(void){

    int a, b, c, d, e, f;
    float x, y;

    x = 3.0 * 2.0 / 6.0;
    y = 3.0 / 2.0 * 6.0;
    a = 3 * 2 / 6;
    b = 3 / 6 * 2;
    c = 3 * 2.0 / 6;
    d = 3.0 / 6 * 2;
    e = 6 * 4 + 3 % 2;
    f = 6 * (4 + 3) % 2;

    printf("x=%f\n", x);
    printf("y=%f\n", y);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("d=%d\n", d);
    printf("e=%d\n", e);
    printf("f=%d\n", f);

    return 0;
}