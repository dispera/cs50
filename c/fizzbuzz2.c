#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	int i;
	bool fizzFlag;

	for (i=1; i<10000000; i++) {
		fizzFlag = false;

		if ((i % 3) == 0) {
			printf("Fizz");
			fizzFlag = true;
		}
		if ((i % 5) == 0) {
			printf("Buzz");
		}
		else if (fizzFlag == false) {
			printf("%i", i);
		}

	printf(" ");
	}
}