#include <stdio.h>

void square(int n);
void _square(int *n);

int main() {
	int number = 5;

	square(number);
	printf("Number: %d\n",number);

	_square(&number);
	printf("Number: %d\n",number);

	return 0;
}

void square(int n) {
	n *= n;
	printf("Square is: %d\n", n);
}

void _square(int *n) {
	*n *= *n;
	printf("_Square is: %d\n", *n);
}
