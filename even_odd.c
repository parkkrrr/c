#include <stdio.h>

//Program to check if a number is Even or Odd.

int main(){

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d",num % 2 == 0);

	return 0;
}
