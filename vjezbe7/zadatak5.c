// Definirati trodimenzionalno cjelobrojno polje veličine 4 sloja, 3 retka i 6 stupaca te ga na najlakši
// mogući način napuniti vrijednostima prikazanim u primjeru izvršavanja programa. Zatim polje
// prikazati u obliku prikazanom u primjeru. Preporuka: koristiti #define kako bi se definirao broj
// slojeva, redaka i stupaca.
// 1. sloj
// 111 112 113 114 115 116
// 121 122 123 124 125 126
// 131 132 133 134 135 136
// 2. sloj
// 211 212 213 214 215 216
// 221 222 223 224 225 226
// 231 232 233 234 235 236
// 3. sloj
// 311 312 313 314 315 316
// 321 322 323 324 325 326
// 331 332 333 334 335 336
// 4. sloj
// 411 412 413 414 415 416
// 421 422 423 424 425 426
// 431 432 433 434 435 436

#include "stdio.h"

int main(void){

    int polje[4][3][6] = { 0 };
    int i;
    int j;
    int k;
    int broj;

    // sloj
    for(i = 1; i <= 4; i++){

        printf("%d. sloj\n", i);

        // redak
        for(j = 1; j <= 3; j++){

            broj = 100 * i;
            broj += j * 10;

            // stupac
            for(k = 1; k <= 6; k++){

                broj += 1 ;
                polje[i][j][k] = broj;

                printf("%5d", polje[i][j][k]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}