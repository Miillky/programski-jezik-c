#include <stdio.h>
void bin(int x){
    int i;
    for(i=8; i>=0; i--){
        printf("%d", (x>>i)&1);
    }
}

int main(){
    int l_test = 0xC; //1100
    int l_broj;
    printf("Molimo unesite broj \n");
    scanf("%d", &l_broj);
    printf("Binarni zapis: ");
    bin(l_broj);
    if(l_broj & l_test){
        printf("\n Ulaz odgovara testu");
    } else {
        printf("\n Ulaz ne odgovara testu");
    }
    return 0;
}
