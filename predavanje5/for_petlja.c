#include <stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        printf("%d\n", i);
    }

    for(int j = 0; j < 10; j = j + 2 ){
        printf("%d\n", j);
    }

    int k;

    k = 0;
    for(; k < 10; ){
        printf("%d\n", k);
        k++;
    }

    return 0;
}