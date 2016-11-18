#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{	
	char output[9];
	bool fizzFlag;

	for (int i=1; i<10000000; i++) {
		//output = "";
		strcpy(output,"");
		fizzFlag = false;

		if ((i % 3) == 0) {
			strcat(output, "Fizz");
			fizzFlag = true;
		}
		if ((i % 5) == 0) {
			strcat(output, "Buzz");
		}
		else if (fizzFlag == false) {
			//strcpy(output,itoa(i));
			sprintf(output,"%d", i);
		}

		printf("%s ", output);
	}
}