#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// Source : https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/

typedef struct stackNode
{
    int data;
    struct stackNode *next;
} node;

void push(node **root, int data);
int pop(node **root);
int top(node *root);
int isEmpty(node *root);
// int size();


node *newNode(int data)
{
    node *stackNode = (node *)malloc(sizeof(node));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int main()
{
    printf("--------------------------------");
    printf("Select Option : \n");
    printf("1. Insert an Element\n");
    printf("2. Remove an Element\n");
    printf("3. Display top Element\n");
    printf("4. Check if Stack isEmpty\n");
    // printf("5. Size of the stack\n");
    printf("6. Exit\n");
    
    printf("--------------------------------");

    int option;
    scanf("%d", &option);

    node *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    printf("%d popped from stack \n", pop(&root));

    printf("Top element is %d \n", top(root));

    // while (option != 6)
    // {
        // switch (option)
        // {
        // case '1':
        //     push();
        //     break;
        // case '2':
        //     pop();
        //     break;
        // case '3':
        //     top();
        //     break;
        // case '4':
        //     isEmpty();
        //     break;
        // // case '5':
        // //     size();
        // //     break;
        // case '6':
        //     break;
        // default:
        //     printf("Invalid Option");
        // }
    
    // }

    return 0;
}

void push(node **root, int data) // n is the size of the stack
{
    // if(top ==n)
    //     printf("\n Stack Overflow!!!");
    // else {
    //     top += 1;
    //     stack[top]=val;
    // }

    node *stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d Pushed to stack \n", data);
}
int pop(node **root)
{
    // if(top == -1){
    //     printf("Stack Underflow");
    //     return 0;
    // }
    // else
    //     return stack[top];

    if (isEmpty(*root))
        return INT_MIN;
    node *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}
int top(node *root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
int isEmpty(node *root)
{
    return !root;
}
// int size(){
//     return top==;
// }