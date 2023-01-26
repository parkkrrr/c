#include <stdio.h>

int main()
{
    int bin[10], i=0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; i < n;)
    {
        bin[i++] = n % 2;
        n /= 2;
    }

    for (int j = i-1; j >= 0; j--)
        printf("%d", bin[j]);

    return 0;
}