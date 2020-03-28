#include <stdio.h>

int main(){

    int topli_napitak;
    topli_napitak = 3;

    switch (topli_napitak){
        case 1:
            printf("Automat kuha kratku kavu");
            break;
        case 2:
            printf("Automat kuha dugu kavu");
            break;
        case 3:
            printf("Automat kuha čaj");
            break;
        default:
            printf("Niste odabrali vrstu toplog naptika");
            break;
    }

    return 0;
}