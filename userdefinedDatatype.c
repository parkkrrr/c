#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[100];
    float cgpa;
};

int main()
{
    struct student s1;
    strcpy(s1.name,"Prakhar");
    s1.rollNo=53;
    s1.cgpa=5.6;

    printf("%s\n",s1.name);
    printf("%f",s1.cgpa);

    return 0;
}
