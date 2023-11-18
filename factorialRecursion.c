#include <stdio.h>

long long factorial(long long n);

int main() {
	long long n=13;
	
	printf("factorial of 13: %lld", factorial(n));
	return 0;
}

long long factorial(long long n) {

	if(n == 1) {
		return 1;
	}

	long long factNm1 = factorial(n-1);
	long long factN = factNm1 * n;
}
