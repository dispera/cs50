#include <stdio.h>
#include <string.h>

int main (void)
{
	int height;
	int i = 1;

	printf("Enter Mario's Pyramid height (0 < height < 23): ");
	scanf("%d", &height);

	// Continue asking until the height is within the requested values
	while ((height > 23) || (height < 1))
	{
		printf("Retry: ");
		scanf("%d", &height);
	}

	while (i <= height)
	{
		for (int j=0;j<=(height-i);j++)
			printf(" ");
		for (int j=0;j<=i;j++)
			printf("#");

		printf("\n");

		i++;
	}
}

/* 
 * Example output:
 * Enter Mario's Pyramid height (0 < height < 23): 8
 *         ##
 *        ###
 *       ####
 *      #####
 *     ######
 *    #######
 *   ########
 *  #########
 */