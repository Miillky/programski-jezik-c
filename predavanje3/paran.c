#include <stdio.h>

void bin(int x){
    int i;
    for (i=8; i>=0; i--){
        printf("%d", (x>>i)&1);
    }
}

int main(){
    int x;
    printf("Molimo unesite broj \n");
    scanf("%d", &x);
    printf("Binarni zapis: ");
    bin(x);
    if(x & 1){
        printf("\nBroj je neparan");
    } else {
        printf("\nBroj je paran");
    }
    return 0;
}