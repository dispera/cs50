#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;

	for (i=1; i<10100000; i++) {
		if ((i % 3) == 0) {
			printf("Fizz");
		}
		if ((i % 5) == 0) {
			printf("Buzz");
		}
		else if ((i % 3) != 0) {
			printf("%i", i);
		}

	printf(" ");
	}
}