#include <stdio.h>

int fibonacci(int n);

int main() {

	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	printf("%d",fibonacci(n));

	return 0;
}

int fibonacci(int n) {
	//if(n == 0 || n == 1) {
		if(n == 0){
			return 0;
		}
		if(n == 1){
			return 1;
		}


	int fibNm1 = fibonacci(n-1);
	int fibNm2 = fibonacci(n-2);	
	int fib = fibNm1 + fibNm2;
	//printf("%d", fib);

	return fib;
}
