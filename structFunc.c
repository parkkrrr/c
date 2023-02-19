#include <stdio.h>

struct student{
    float cgpa;
    int rollNo;
    char name[100];
};

void printInfo(struct student s);

int main() {
    struct student s1={5.6, 53, "Prakhar"};

    printInfo(s1);
    return 0;
}

void printInfo(struct student s){
    printf("Name : %s\n",s.name);
    printf("Roll No. : %d\n",s.rollNo);
    printf("CGPA : %f\n",s.cgpa);
}