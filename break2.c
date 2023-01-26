#include <stdio.h>

int main() {

	int n;

	while(1) {
		
		printf("Enter Number: \n");
		scanf("%d", &n);

		if(n % 7 == 0) {
			break;
		}
	}

	return 0;
}
