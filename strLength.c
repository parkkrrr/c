#include <stdio.h>
#define MAX 100

int len(char arr[MAX]);

int main() {

    char name[MAX];
    fgets(name, MAX,stdin);
    puts(name);
    printf("%d", len(name));

    return 0;    
}

int len(char arr[MAX]){
    int length=0;
    for(int i=0; arr[i]!='\0'; i++)
        length++;

    return length-1;
}

//Or we can use the strlen(name) function. #include <string.h>
