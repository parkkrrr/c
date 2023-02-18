#include <stdio.h>

void slice(char arr[], int from, int to);

int main()
{

    char sentence[] = "I am Prakhar";

    slice(sentence, 2, 8);
    return 0;
}

void slice(char arr[], int from, int to)
{
    char newSentence[100];
    int j = 0;
    for (int i = from; i <= to; i++, j++)
    {
        // printf("%c",arr[i]);
        newSentence[j] = arr[i];
    }
    newSentence[j] = '\0';
    puts(newSentence);
}