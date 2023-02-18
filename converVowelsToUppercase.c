#include <stdio.h>
#include <string.h>

void vowelsToUppercase(char arr[]);

int main() {

    char str[]="Prakhar is Limitless";

    vowelsToUppercase(str);
    return 0;
}

void vowelsToUppercase(char arr[]){

    char newArr[100];
    strcpy(newArr,arr);

    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i]=='a')
            newArr[i]=65;
        
        else if(arr[i]=='e')
            newArr[i]=69;
        
        else if(arr[i]=='i')
            newArr[i]=73;
        
        else if(arr[i]=='o')
            newArr[i]=79;
        
        else if(arr[i]=='u')
            newArr[i]=85;
    }
    printf("%s", newArr);
}