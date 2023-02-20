#include <stdio.h>

typedef struct bankInfo{
    int accountNo;
    char name[100];
} acc;

int main() {

    acc acc1 ={12345, "Prakhar"};
    acc acc2 ={12344, "Manohar"};

    printf("Name : %s\nAccount Number : %d\n", acc1.name, acc1.accountNo);
    printf("Name : %s\nAccount Number : %d", acc2.name, acc2.accountNo);

    return 0;
}