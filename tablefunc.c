#include <stdio.h>

void table(int n);

int main() {

	int n;

	printf("Enter a Number: ");
	scanf("%d", &n);

	table(n);	//argument or actual parameter

	return 0;
}

void table(int n) {	//paramter or formal parameter

	for(int i=1; i<=10; i++) {
		printf("%d*%d = %d\n", n, i, n*i);
	}
}

