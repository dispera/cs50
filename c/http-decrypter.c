#include <stdio.h>
#include <string.h>

int main (void) {
	char s[32] = "uggcf://lbhgh.or/bUt5FWLEUN0";

	//scanf("%s", s);


	for(int i = 0, n = strlen(s); i < n; i++) 
	{
		int x = 13;

		// Lowercaser!!
		if (s[i] >= 'A' && s[i] <= 'Z') 
			s[i] += ('a' - 'A');

		// Decrypt: switch 13 characters up or down the alphabet
		if (s[i] >= 'a' && s[i] <= 'z') {
			if ((s[i] - 13) < 'a') 
				x = -13;

			printf("%c",s[i] - x);
		}
		// Add else if to do something if the character is a number:
		// else if (s[i] >= '0' && s[i] <= '9') printf("%c", s[i] + ('A' - '0'));

		else printf("%c", s[i]);


		
		//if (s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i] - ('u' - 'h'));
		//else if (s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i] + ('u' - 'h'));
		//else printf("%c", s[i]);
	}

	puts("");
}