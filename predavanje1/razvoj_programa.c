#include <stdio.h>

int main(void)
{
    int N = 0;
    printf("Do koliko treba brojati? ");
    scanf("%d", &N);

    if (N>0){
        for (int i = 0; i < N; ++i) {
            printf("%d\n", i);
        }
    }
    return 0;
}