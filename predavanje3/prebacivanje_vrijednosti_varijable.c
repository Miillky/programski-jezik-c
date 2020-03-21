#include <stdio.h>

void bin(int x){
    int i;
    for(i=8; i>=0; i--){
        printf("%d", (x>>i)&1);
    }
    printf("\n");
}

int main(){
    int x = 100, y = 23;
    printf("inicijalno x=%d y=%d \n", x, y);
    printf("x=");bin(x);
    printf("y=");bin(y);
    printf("\n");
    x^=y;
    printf("x^=y x=%d y=%d \n", x, y);
    printf("x=");bin(x);
    printf("y=");bin(y);
    printf("\n");
    y^=x;
    printf("y^=x x=%d y=%d \n", x, y);
    printf("x=");bin(x);
    printf("y=");bin(y);
    printf("\n");
    x^=y;
    printf("x^=y y=%d y=%d \n", x, y);
    printf("x=");bin(x);
    printf("y=");bin(y);
    printf("\n");
    return 0;
}