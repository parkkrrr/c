#include <stdio.h>

int main() {

	int n;

	printf("Enter a Number: ");
	scanf("%d", &n);

	int i=1;
	int sum=0;
	
	for(int i=1, j=n; i<=n && j>=1; i++, j--) {	//for(int j=n; j>=1; j--) {
							//	sum += j;
							//	print("%d\n", j);
							//	}
		sum += i;
		printf("%d\n", j);
	}



/*	while(i<=n) {
		
		printf("%d\n", i);
		sum += i;
		i++;

	}
*/
	printf("Sum: %d", sum);

	
	//for(int i=n; i>=1; i--) {
	//	printf("%d\n", i);
	
	
/*
	for(int i=1; i<=n ; i++) {
		sum += i;
		printf("%d\n", sum);
	}
*/
	return 0;

}

