#include <stdio.h>

int main()
{
    FILE *file;
    file=fopen("function.c", "r");

    char ch;
    ch= fgetc(file);
    while(ch != EOF){
        printf("%c",ch);
        ch=fgetc(file);
    }

    fclose(file);

    return 0;
}