#include <stdio.h>

void Namaste(), Bonjour();

int main() {

	int user;
	printf("Are you an Indian [Y=1/N=0]: ");
	scanf("%d", &user);

	if(user == 1) {
		Namaste();
	} else {
		Bonjour();
	}

	return 0;
}

void Namaste() {
	printf("Namaste!");
}

void Bonjour() {
	printf("Bonjour");
}

