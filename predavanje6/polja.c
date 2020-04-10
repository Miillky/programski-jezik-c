#include <stdio.h>

int main(void){

    int polje[2];

    polje[0] = 200;
    polje[1] = 300;

    printf("1. element: %d\n", polje[0] );
    printf("2. element: %d\n", polje[1] );
    printf("3. element: %d\n", polje[2] );

    char cpolje[5];

    cpolje[0] = 12;
    cpolje[1] = -50;
    cpolje[2] = 34;
    cpolje[3] = 500;
    cpolje[4] = -673;

    printf("1. element: %5d, lokacija: %8d\n", cpolje[0], &cpolje[0]);
    printf("2. element: %5d, lokacija: %8d\n", cpolje[1], &cpolje[1]);
    printf("3. element: %5d, lokacija: %8d\n", cpolje[2], &cpolje[2]);
    printf("4. element: %5d, lokacija: %8d\n", cpolje[3], &cpolje[3]);
    printf("5. element: %5d, lokacija: %8d\n", cpolje[4], &cpolje[4]);

    return 0;
}