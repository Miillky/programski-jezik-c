#include <stdio.h>

int main(void){

    int a = 5, b = 5;
    int x, y;
    int i = 7;

    x = ++a;
    y = b++;

    printf("a=%d\n",a);
    printf("a=%d\n",b);
    printf("a=%d\n",x);
    printf("a=%d\n",y);

    printf("i=%d\n", --i);
    printf("i=%d\n", i--);
    printf("i=%d\n", i);

    return 0;
}