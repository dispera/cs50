#include <stdio.h>
#include <string.h>

int main(void)
{
	char output[8] = "";
	int i;

	for (i=0; i<101; i++) {
		if ((i % 3) == 0) {
			output = strcat(output, "Fizz");
		}
		else if ((i % 5) == 0) {
			output = strcat(output, "Buzz");
		}
		else {
			output = itoa(i);
		}

	printf("%s", output);
	}
}