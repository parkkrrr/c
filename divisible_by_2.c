#include <stdio.h>

//Program to check if a number is divisible by 2 or not.
int main(){

	int num;

	printf("Enter a number: ");
	scanf("\n%d",&num);

	if (num % 2 == 0) {
		printf("\n%d is divisible by 2.", num);
	}

	return 0;
}
