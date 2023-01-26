#include <stdio.h>

void calculatePrice(float x);

int main() {

	float n;

	printf("Enter Price: ");
	scanf("%f", &n);
	
	calculatePrice(n);

	return 0;
}

void calculatePrice(float value) {
	value += 0.18*value;
	printf("Final Price is: %f", value);
}
