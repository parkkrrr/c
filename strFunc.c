#include <stdio.h>

int main(){

    char name[100];
    // char *ptr= name;
    fgets(name, 100, stdin);
    puts(name);
    // printf("%s", ptr);
    // *(ptr+1)='u';
    // printf("\n%s", ptr);
    

    return 0;
}