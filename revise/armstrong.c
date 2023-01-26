#include <stdio.h>

int main()
{
    int n, rem, temp;
    long arm;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        arm+=rem*rem*rem;
        n /= 10;
    }

    if (temp == arm)
        printf("%ld is Armstrong\n", arm);
    else
        printf("!Armstrong");
    
    return 0;
}