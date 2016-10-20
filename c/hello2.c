#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	string name;
	int num;

	name = GetString();
	printf("hello, %s!\n", name);
	
	num = GetInt();
	printf("The magic number is: %i\n", num);
}
