#include <stdio.h>

void HelloWorld(int count);

int main() {

	HelloWorld(8);
	
	return 0;
}

void HelloWorld(int count) {
	
	if(count == 0){ 
		return;
	}

	printf("Hello World\n");
	HelloWorld(count - 1);

}
