#include <stdio.h>

int main(void){
    float broj;

    broj = 12.3567891234;

    printf("%.2f\n", broj);
    printf("%+.2f\n", broj);
    printf("%+10.2f\n", broj);

    return 0;
}
