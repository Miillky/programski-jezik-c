#include <stdio.h>

int main (void){

    int l_value1;
    int l_value2;
    int l_value3;
    int l_value4;

    l_value1 = 21;
    l_value2 = 5;
    l_value3 = l_value1 / l_value2;
    l_value4 = l_value1 % l_value2;

    printf("Rezultat dijeljenja=%d\n", l_value3);
    printf("Rezultat modula=%d\n", l_value4);

    return 0;
}