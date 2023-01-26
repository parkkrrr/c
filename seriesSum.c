#include <stdio.h>

int main() {

	int n;
    long sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
		sum+=i;
	
	printf("Sum of %d is %ld", n, sum);

	return 0;
}
