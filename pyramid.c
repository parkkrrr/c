#include <stdio.h>

main() {
	
	for(int i=1; i<=11; i++) {
		for(int j=1; j<=11-i;j++) 
			printf(" ");
		
		for(int k=1; k<=2*i-1; k++)
			printf("*");

		printf("\n");
	}

	return 0;
}	

