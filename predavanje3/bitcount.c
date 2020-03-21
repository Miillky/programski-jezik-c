#include <stdio.h>

int f_bitcount(int n){
    int count = 0;
    while (n > 0){
        if(n & 1){
            count++;
        }
        n >>= 1;
    }
    return count;
}

long long f_pretvori(int n){
    long long l_binbroj = 0;
    int ostatak, i = 1;

    while(n != 0){
        ostatak = n % 2;
        n /= 2;
        l_binbroj += ostatak * i;
        i *= 10;
    }
    return l_binbroj;
}

int main(){
    int l_broj;
    printf("Molimo unesite broj \n");
    scanf("%d", &l_broj);
    printf("Broj %d u binarnom zapisu je \n %d, a ima \n %d setiranih bitova \n", l_broj, f_pretvori(l_broj), f_bitcount(l_broj));
}
