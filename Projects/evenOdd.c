#include <stdio.h>

int evenOdd(int);

int main()
{
    int num, flag;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    flag = evenOdd(num); // function call
    if (flag == 1)
        printf("\n%d is Even", num);
    else
        printf("%d is Odd", num);

    return 0;
}

int evenOdd(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}