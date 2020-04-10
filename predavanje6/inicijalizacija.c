#include <stdio.h>

int main(void){

    int polje[5] = {2, [4] = 5};

    printf("1. element: %5d, lokacija: %8d\n", polje[0], &polje[0]);
    printf("2. element: %5d, lokacija: %8d\n", polje[1], &polje[1]);
    printf("3. element: %5d, lokacija: %8d\n", polje[2], &polje[2]);
    printf("4. element: %5d, lokacija: %8d\n", polje[3], &polje[3]);
    printf("5. element: %5d, lokacija: %8d\n", polje[4], &polje[4]);

}