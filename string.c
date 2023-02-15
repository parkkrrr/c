#include <stdio.h>

void printString(char string[]);

int main() {

    char firstName[30], lastName[30];

    printf("Enter First Name: ");
    scanf("%s", firstName);
    
    printf("Enter Last Name: ");
    scanf("%s", lastName);

    printString(firstName);
    printString(lastName);

    return 0;  
}

void printString(char string[]){
    for(int i=0; string[i] != '\0'; i++)
        printf("%c", string[i]);

    printf("\n");
}