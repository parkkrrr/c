#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    node obj1,obj2,obj3;
    obj1.data=20;
    obj1.next=NULL;
    
    obj2.data=30;
    obj2.next=NULL;
    
    obj3.data=40;
    obj3.next=NULL;

    obj1.next=&obj2;
    obj2.next=&obj3;

    printf("Object1: %d\n", obj1.data);
    printf("Object2: %d\n", obj1.next->data);
    printf("Object3: %d\n", obj1.next->next->data);

    return 0;
}