#include <stdio.h>

int main()
{
    char str[100], i = 0, length;
    printf("\nEnter the string: ");
    gets(str);
    while (str[i] != '\0')
        i++;
    length = i;
    printf("\nThe length of the string is: %d", length);
    return 0;
}