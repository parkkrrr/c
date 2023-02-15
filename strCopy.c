#include <stdio.h>
#include <string.h>

int main()
{

    char FirstName[] = "Prakhar";
    char LastName[] = "Verma";
    char NewStr[100];

    strcpy(NewStr, FirstName);
    printf("First Name : %s\n", FirstName);
    printf("Last Name : %s\n", LastName);
    printf("NewStr : %s\n", NewStr);

    return 0;
}