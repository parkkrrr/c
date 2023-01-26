#include <stdio.h>
#include <conio.h>

int main(){
	
	int a, b, c;

	printf("Enter three numbers: ");
	scanf("%d %d %d",&a, &b, &c);
	printf("Average: %d", (a+b+c)/3);
	getch();
	return 0;
}
