#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter 3 Prices: ");
    for (int i = 0; i < 3; i++)
        scanf("%f", &price[i]);

    for (int i = 0; i < 3; i++)
        printf("Total price %d : %f\n", i + 1, price[i] + (0.18 * price[i]));

    return 0;
}