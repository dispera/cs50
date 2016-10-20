#include <stdio.h>

int main (void)
{
	int minutes;

	printf("How long do you take to shower (in minutes): ");
	scanf("%i", &minutes);

	printf("You are using %.1f litres of water\n", 5.67 * minutes);
}