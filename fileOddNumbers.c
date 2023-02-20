#include <stdio.h>

int main(){

    FILE *file;
    file=fopen("fileOdd.txt", "w");

    for(int i=1; i<100;i++)
        if(i%2!=0)
            fprintf(file, "%d\n", i);

    fclose(file);
    return 0;
}