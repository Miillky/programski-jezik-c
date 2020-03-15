#include <stdio.h>

int main(void){

    float l_value1 = 34.0, l_value2 = 5.0;
    float l_value3;

    l_value3 = l_value1 + l_value2;
    printf("Rezultat zbroja %f\n", l_value3);

    l_value3 = l_value1 - l_value2;
    printf("Rezultat razlike=%.1f\n", l_value3);

    l_value3 = l_value1 * l_value2;
    printf("Rezultat množenja=%.2f\n", l_value3);

    l_value3 = l_value1 / l_value2;
    printf("Rezultat djeljenja=%.2f\n", l_value3);

    return 0;
}