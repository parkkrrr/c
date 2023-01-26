#include <stdio.h>

int factorial(int n);

int main() {
	int n=5;
	
	printf("factorial of 5: %d", factorial(n));
	return 0;
}

int factorial(int n) {

	if(n == 1) {
		return 1;
	}

	int factNm1 = factorial(n-1);
	int factN = factNm1 * n;
}
