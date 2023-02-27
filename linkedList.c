#include <stdio.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

int main()
{
    node *head=NULL;
    node *first=NULL;
    node *second=NULL;

    head = (node*)malloc(sizeof(node));
    first = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    
    head->data=20;
    head->data=&first;
    
    first->data=30;
    first->next=&second;
    
    second->data=40;
    second->next=NULL;

    while(head!=NULL){
        printf("%d\n", head->data);
        head=head->next;
    }
    // printf("Object1: %d\n", head.data);
    // printf("Object2: %d\n", head.next->data);
    // printf("Object3: %d\n", head.next->next->data);

    return 0;
}