// Pomoću funkcije printf() prikažite sve varijable iz prošlog zadatka - svaku varijablu u posebnom redu.
// Varijablu za tip char napišite dva puta: u obliku cjelobrojne vrijednosti i u obliku alfanumeričkog znaka.

#include <stdio.h>

int main(void){

    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;
    _Bool boolVar;

    integerVar = 4;
    floatVar = 3.45;
    doubleVar = 4.884;
    charVar = 'F';
    boolVar = 0;

    printf("%d\n", integerVar);
    printf("%f\n", floatVar);
    printf("%lf\n", doubleVar);
    printf("%d\n", charVar);
    printf("%c\n", charVar);
    printf("%d\n", boolVar);

    return 0;

}

