// Izradite program koji prikazuje sve parne brojeve od 0 do 100.

#include <stdio.h>

int main(){

    int i;

    for (i = 0; i <= 100; i = i + 2) {
        printf("%d ", i);
    }

    return 0;
}