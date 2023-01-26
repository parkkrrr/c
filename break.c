#include <stdio.h>

int main() {

	int n;

//	printf("Enter a number: ");

	/*
	while(n % 2 == 0) {

		scanf("%d", &n);
		printf("Enter the number: \n");
	}
	*/

/*	for(int i=1 ; ;) {
		scanf("%d", &n);
		if(n % 2 != 0) {
			break;
		}
	}
*/

	do {
		printf("Enter Number: ");
		scanf("%d", &n);
		printf("%d \n", n);

		if(n % 2 != 0) {
			break;
		}
	} while(1);

	printf("Thank You!");

	return 0;
}
		
