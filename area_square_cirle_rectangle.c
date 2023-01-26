#include <stdio.h>

void areaCircle(float radius);
void areaRectangle(int length, int breadth);
void areaSquare(int side);

int main() {

	float radius;
	int side, breadth, length;
	char user;
	
	printf("Area of Circle = C \nArea of Rectangle = R \nArea of Square = S\n-->");
	scanf("%c", &user);

	switch(user) {
		case 'C': printf("Enter Radius: ");
			  scanf("%f",&radius);
			  areaCircle(radius);
			  break;

		case 'R': printf("Enter Length and Breadth: ");
			  scanf("%d %d", &length, &breadth);
			  areaRectangle(length, breadth);
			  break;

		case 'S': printf("Enter Side: ");
			  scanf("%d", &side);
			  areaSquare(side);
			  break;

		default: printf("Wrong Input");
	}
	

	return 0;
}

void areaCircle(float radius) {
	float pi = 3.14;
	printf("Area of Circle: %f", pi*(radius*radius));
}

void areaRectangle(int length, int breadth) {
	printf("Area of Rectangle: %d", length * breadth);
}

void areaSquare(int side) {
	printf("Area of Square: %d", side * side);
}

