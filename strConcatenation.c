#include <stdio.h>
#include <string.h>

int main()
{

    char FirstName[100] = "Prakhar";
    char LastName[] = "Verma";

    strcat(FirstName, LastName);

    printf("First Name : %s", FirstName);
    return 0;
}
