#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *n;
    n = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 6; i++)
        scanf("%d", &n[i]);

    for (int i = 0; i < 9; i++)
        printf("%d\n", n[i]);
     
    free(n);
    return 0;
}