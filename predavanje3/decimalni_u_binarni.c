#include <stdio.h>

void bin(int x){
    int i;
    for(i=31; i>=0; i++){
        printf("%d", (x>>i)&1);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    bin(x);
    return 0;
}

