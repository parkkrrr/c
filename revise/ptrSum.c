#include <stdio.h>

int sum(int *a, int *b);
int _sum(int a, int b);

int main() {
	int a = 5;
	int b = 8;
	int x = 8;
	int y = 5;

	printf("Sum of a and b: %d\n", sum(&a, &b));
	printf("_Sum of a and b: %d", _sum(x, y));

	return 0;
}

int sum(int *a, int *b) {
	*a = *b;
	*b = c;
	int c = 8;
	return *a + *b;
}

int _sum(int a, int b) {
	a = 8;
	b = 9;

	return a + b;
}
