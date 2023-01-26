#include <stdio.h>

float convertTemp(float n);

int main() {

	float n;

	printf("Enter Celsius: ");
	scanf("%f", &n);
	
	float far = convertTemp(n);
	printf("%f F", far);

	return 0;
}

float convertTemp(float n) {
	float farh = n*(9.0/5.0)+32;
	return farh;
}

