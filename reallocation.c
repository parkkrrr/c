#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n;

    n = (int *)malloc(5 * sizeof(int));

    n = realloc(n, 8);
    for (int i = 0; i < 8; i++)
        printf("%d\n", n[i]);

        return 0;
}