#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("fileOdd.txt", "r");

    int a, b;
    int sum = 0;

    fscanf(file, "%d", &a);
    fscanf(file, "%d", &b);
    sum= a+b;

    file = fopen("fileOdd.txt", "w");


    fprintf(file, "%d", sum);

    fclose(file);

    return 0;
}