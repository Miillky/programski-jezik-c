#include <stdio.h>

int main(){

    int l_broj1 = 4;
    int l_broj2 = 5;

    printf("%d & %d = %d\n", l_broj1, l_broj2, l_broj1 & l_broj2);
    printf("%d | %d = %d\n", l_broj1, l_broj2, l_broj1 | l_broj2);
    printf("%d ^ %d = %d\n", l_broj1, l_broj2, l_broj1 ^ l_broj2);
    printf("~%d = %d\n", l_broj1, ~l_broj1);

    printf("%d >> 1 = %d\n", l_broj1, l_broj1 >> 1);
    printf("%d << 3 = %d\n", l_broj2, l_broj2 << 3);

    return 0;
}