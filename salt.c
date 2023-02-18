#include <stdio.h>
#include <string.h>

void salt(char pass[]);

int main()
{
    char pwd[100];

    puts("Enter Password: ");
    scanf("%s", pwd);

    salt(pwd);

    return 0;
}

void salt(char pass[])
{

    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, pass);
    strcat(newPass, salt);
    puts(newPass);
}