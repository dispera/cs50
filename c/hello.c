#include <stdio.h>
#include <string.h>

int main(void) 
{
	char name[30];
	int num;

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello, %s!\n", name);
}
