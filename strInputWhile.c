#include <stdio.h>

int main()
{
    char sentence[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        sentence[i] = ch;
        i++;
    }
    sentence[i] = '\0';
    printf("%s", sentence);

    return 0;
}