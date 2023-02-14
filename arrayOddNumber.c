#include <stdio.h>

void countOdd(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    countOdd(arr,10);

    return 0;
}

void countOdd(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++)
        // if(arr[i]%2! =0)
        if(*(arr+i)%2!=0)
            count++;

        printf("%d",count);
}