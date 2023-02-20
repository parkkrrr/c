#include <stdio.h>

int main() {

    FILE *file;
    file=fopen("factorial.c","r");

    char ch;

    if(file==NULL)
        printf("File doesn't exist.\n");
    else{
        fscanf(file,"%c", &ch);
        printf("character = %c\n", ch);
        fclose(file);
    }
}