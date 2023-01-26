#include <stdio.h>

void decimalToBinary(int n)
{

    int bin[10], i = 0;

    while (n > 0)
    {
        bin[i++] = n % 2;
        n /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}