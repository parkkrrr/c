#include <stdio.h>

int countVowel(char arr[]);

int main(){
    char string[]= "I am Prakhar";

    printf("%d",countVowel(string));

    return 0;
}

int countVowel(char arr[]){

    int count=0;

    for(int i=0; arr[i]!='\0';i++){
        if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u')
            count++;
    }

    return count;
}