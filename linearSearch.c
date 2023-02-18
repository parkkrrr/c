#include <stdio.h>

void linearSearch(char arr[], char search);

int main()
{

    char str[] = "Prakhar is Limitless";

    linearSearch(str, 'k');
    return 0;
}

void linearSearch(char arr[], char search)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == search)
        {
            printf("Found at index : %d", i);
            return;
        }
    }
    printf("Not Found!");
}