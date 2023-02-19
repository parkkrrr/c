#include <stdio.h>

typedef struct address
{
    int houseNo;
    char block;
    char city[100];
    char state[100];
} addr;

void printInfo(addr people)
{
    printf("House No. :%d\n", people.houseNo);
    printf("Block :%c\n", people.block);
    printf("City :%s\n", people.city);
    printf("State :%s\n", people.state);
}
int main()
{
    addr people[5];

        printf("Enter info for person 1 : \n");
        scanf("%d", &people[0].houseNo);
        scanf("%s", &people[0].block);
        scanf("%s", &people[0].city);
        scanf("%s", &people[0].state);


        printf("Enter info for person 2 : \n");
        scanf("%d", &people[1].houseNo);
        scanf("%s", &people[1].block);
        scanf("%s", &people[1].city);
        scanf("%s", &people[1].state);

        printf("Enter info for person 3 : \n");
        scanf("%d", &people[2].houseNo);
        scanf("%s", &people[2].block);
        scanf("%s", &people[2].city);
        scanf("%s", &people[2].state);

        printf("Enter info for person 4 : \n");
        scanf("%d", &people[3].houseNo);
        scanf("%s", &people[3].block);
        scanf("%s", &people[3].city);
        scanf("%s", &people[3].state);

        printf("Enter info for person 5 : \n");
        scanf("%d", &people[4].houseNo);
        scanf("%s", &people[4].block);
        scanf("%s", &people[4].city);
        scanf("%s", &people[4].state);


    for(int i=0; i< 5; i++){
        printInfo(people[i]);
    }
    return 0;
}