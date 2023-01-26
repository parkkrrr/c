#include <stdio.h>

int Pow(int a, int b);

int main() {
	int a, b;

	printf("Enter Number: ");
	scanf("%d %d", &a, &b);

	printf("%d",Pow(a, b));


	return 0;
}

int Pow(int j, int k) {
	int power = 1;
	for(int i=1; i <= k; i++) {
		power = power * j; 
	}

	return power;
}

	

	
