#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;

    ptr = (int *)malloc(6 * sizeof(int));
    ptr[0] = 51;
    ptr[1] = 41;
    ptr[2] = 31;
    ptr[3] = 21;
    ptr[4] = 11;

    printf("%d\n", sizeof(ptr));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}