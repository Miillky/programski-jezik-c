#include <stdio.h>

int main(){

    int i;

    i = 0;

    while(i < 10){
        printf("%d ", i);
        i++;
    }

    printf("\n");

    while(i < 20){
        if(i % 2 == 0){
            printf("%d ", i);
        }
        if(i < 10){
            i++;
        } else {
            i = i + 4;
        }
    }

    return 0;
}