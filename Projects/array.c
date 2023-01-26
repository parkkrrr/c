#include <stdio.h>

int main()
{
    // Set each element of the array to -1
    int i, marks[10];
    for (i = 0; i < 10; i++)
        marks[i] = -1;

    // Code for inputting each element of the array
    for (i = 0; i < 10; i++)
        scanf("%d", &marks[i]);

    // Code to copy an array to the individual element level
    // int i;
    int arr1[10], arr2[10];
    arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    for(i=0;i<10;i++)
        arr2[i] = arr1[i];
    
}