#include <stdio.h>

int main(void) {
	float number; 
	int ntemp, counter = 0;

	printf("Enter a number: ");
	scanf("%f", &number);

	while (((int)number % 10) != 0) {
		number /= 10;
		counter++;
	}
	number *= 10;
	ntemp = (int) number;

	while (counter != 0) {
		
		if (ntemp % 10 == 0) printf("Zero ");  
		else if (ntemp % 10 == 1) printf("One "); 
		else if (ntemp % 10 == 2) printf("Two "); 
		else if (ntemp % 10 == 3) printf("Three "); 
		else if (ntemp % 10 == 4) printf("Four "); 
		else if (ntemp % 10 == 5) printf("Five "); 
		else if (ntemp % 10 == 6) printf("Six "); 
		else if (ntemp % 10 == 7) printf("Seven "); 
		else if (ntemp % 10 == 8) printf("Eight "); 
		else if (ntemp % 10 == 9) printf("Nine "); 
		
		number *= 10;
		ntemp = (int)number;
		counter--;		
	}
	printf("\n\n");
}