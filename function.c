#include <stdio.h>

void Hello(), GoodBye();


int main() {

	Hello();
	GoodBye();

	return 0;

}

void Hello() {

	printf("Hello\n");
}

void GoodBye() {
	
	printf("Good Bye");
}
