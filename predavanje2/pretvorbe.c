#include <stdio.h>

int main(void){

    int l_integer1 = 5;
    float l_float1 = 4.3;
    int l_integer3 = 4;
    int l_integer2;
    float l_float2;
    float l_float3;
    float l_float4;

    l_integer2 = l_integer1 * l_float1;
    l_float2 = l_integer1 * l_float1;

    printf("Integer produkt=%.2f\n", l_integer2);
    printf("Float produkt=%.2f\n", l_float2);

    l_float3 = l_integer1 / l_integer3;
    l_float4 = l_integer1 / (float)l_integer3;

    printf("Rezultat bez konverzije=%.2f\n", l_float3);
    printf("Rezultat s konverzijom=%.2f\n", l_float4);

    return 0;
}