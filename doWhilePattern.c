#include <stdio.h>

int main(){
    int a=1, b=1, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    do{
        printf("\n");
        while(b<=a){
            printf("*");
            b++;
        }
        b=1;
        a++;
        
    } while(a<=n);

    return 0;
}