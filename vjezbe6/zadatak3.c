// Izradite program koji omogućava unos s tipkovnice 10 decimalnih brojeva. Prikažite samo pozitivne
// unesene brojeve obrnutim redoslijedom.
// Unesite 1. element : 5.2
// Unesite 2. element : -7.9
// Unesite 3. element : 8.2
// Unesite 4. element : 12
// Unesite 5. element : 500
// Unesite 6. element : -42.445
// Unesite 7. element : 77.9
// Unesite 8. element : 81.045
// Unesite 9. element : 4.5
// Unesite 10. element : 11.22
// 11.22 4.5 81.045 77.9 500 12 8.2 5.2

#include <stdio.h>

int main(void){

    float polje[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Unesite %d. element: ", i +1);
        scanf("%f", &polje[i] );
    }

    for(i = 9; i >= 0; i--){
        if( polje[i] >= 0){
            printf("%f ", polje[i]);
        }
    }

    return 0;
}