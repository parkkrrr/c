#include <stdio.h>
#include <conio.h>

int main()
{

    int i, j, k, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - 1; j++)
            printf(" ");

        for (k = 1; k <= (2 * i - 1); k++)
            printf("* ");

        printf("\n");
    }
    getch();
    return 0;
}