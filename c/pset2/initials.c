#include <stdio.h>
#include <string.h>

int main(void) {
	char name[30];

	printf("Enter your name: ");
	scanf("%s", name);

	printf("%s\n", name);
}