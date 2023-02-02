#include <stdio.h>

int main(){
    int arr[9];
    int *ptr= &arr; 

    for(int i=0; i<10; i++){
        printf("%d index : ", i);
        scanf("%d",ptr+i);
        //scanf("%d", &arr[i]);
    }

    for(int i=0;i<10;i++){
        printf("%d index : %d\n",i, *(ptr+i));
        //printf("%d index : %d\n",i, arr[i]);
    }

    return 0;
}