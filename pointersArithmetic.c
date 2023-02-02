#include <stdio.h>

int main(){
    float price= 108.8;
    float *ptr=&price;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);

    return 0;
}