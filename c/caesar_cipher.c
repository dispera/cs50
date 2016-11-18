#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[]) {
	// The user passes the Key as a parameter
	//char key = argv[1];
	string msg[128];

	printf("Enter the message to decode:\n");
	scanf ("%s", msg);

	for(int i = 0, n = strlen(msg); i < n; i++)
		printf("%c", (msg[i] + key) % 26);
}