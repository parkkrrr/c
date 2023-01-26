#include <stdio.h>

int sum(int a, int b);

int main() {

	int a, b;

	printf("Enter first Number: ");
	scanf("%d", &a);

	printf("Enter second Number: ");
	scanf("%d", &b);
	
	printf("%d",sum(a, b));


	return 0;
}

int sum(int a, int b) {

	return a + b; 
}
