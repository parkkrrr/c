#include <stdio.h>

void swap(int *a, int *b);

int main() {

	int a = 3;
	int b = 9;
	swap(&a, &b);
	printf("Value of a = %d\n", a);
	printf("Value of b = %d\n", b);
	
	return 0;
}

void swap(int *a, int *b) {

	int c = *a;
	*a = *b;
	*b = c;

	printf("a = %d\nb = %d\n",*a, *b);
}


		
