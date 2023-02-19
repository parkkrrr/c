#include <stdio.h>
#include <string.h>

void push();
void pop();
void top();
void isEmpty();
void size();

int main()
{
    printf("--------------------------------");
    printf("Select Option : \n");
    printf("1. Insert an Element\n");
    printf("2. Remove an Element\n");
    printf("3. Display top Element\n");
    printf("4. Check if Stack isEmpty\n");
    printf("5. Size of the stack\n");
    printf("--------------------------------");

    int option;
    scanf("%d", &option);

    while (option != 6)
    {
        switch (option)
        {
        case '1':
            push();
            break;
        case '2':
            pop();
            break;
        case '3':
            top();
            break;
        case '4':
            isEmpty();
            break;
        case '5':
            size();
            break;
        case '6':
            break;
        default:
            printf("Invalid Option");
        }
    }
    return 0;
}