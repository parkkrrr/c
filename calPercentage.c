#include <stdio.h>

float percentage(int m, int sci, int sans);

int main() {
	int maths, science, sanskrit;

	printf("Maths: ");
	scanf("%d", &maths);
	printf("Science: ");
	scanf("%d", &science);
	printf("Sanskrit: ");
	scanf("%d", &sanskrit);
	
	printf("Percentage: %f ", percentage(maths, science, sanskrit));
		

	return 0;
}

float percentage(int m, int sci, int sans) {
	int sum = m + sci + sans;
	float perc = (sum/3);

	return perc;
}
