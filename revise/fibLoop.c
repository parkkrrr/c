#include <stdio.h>

void fib(int n);

int main() {
	
	fib(6);
	return 0;
}

void fib(int n) {
	int fibN = 0;
	for(int i=n; i>=0; i--) {
		n=(n-1) + (n-2);
		printf("%d\t\t%d\n", i, n);
	}
}	
