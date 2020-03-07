#include <stdio.h>

int main(void){

    int a = 15, b =  255;
    float c = 1.12345678;
    int dan, mjesec, godina;

    printf("Kada ste rodjeni?\n");
    printf("dan = ");
    scanf("%d", &dan);
    printf("mjesec = ");
    scanf("%d", &mjesec);
    printf("godina = ");
    scanf("%d", &godina);
    printf("Rodjeni ste %d.%d.%d. \n", dan, mjesec, godina);

    printf("\n\nBoja je %s, broj a = %d, broj b = %05d, hex broj b =%#x, float broj b = %05.3f, broj c = %d \n\n",
            "crvena", a, b, b, c);

    return 0;
}
