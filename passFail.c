#include <stdio.h>

int main() {

	int marks;

	printf("Enter marks: ");
	scanf("%d", &marks);

	if(marks > 30 && marks <=100) {
		printf("Pass");
	}
	else if(marks <= 30 && marks >= 0) { 
		printf("Fail");
	}
	else {
		printf("Wrong Number");
	}
//marks <= 30 ? printf("Fail \n") : printf("Pass \n");
	return 0;
}

