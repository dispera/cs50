#include <stdio.h>
#include <string.h>

int main(void)
{
    float owed;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    
    printf("Hey there! How much change is owed?: $");
    scanf("%f", &owed);
    
    // Continue asking until the amount owed is greater than 0
    while (owed <= 0) {
        printf("Retry: ");
        scanf("%f", &owed);
    }
    // Convert the amount owed to pennies
    owed *= 100;
    
    // Here I substract a coin to the amount owed each pass, until owed reaches 0
    // I also increase a counter for each type of coin used
    while (owed > 0)
    {
        if (owed >= 25) {
            quarters++;
            owed -= 25;
        }
        else if (owed >= 10) {
            dimes++;
            owed -= 10;
        }
        else if (owed >= 5) {
            nickels++;
            owed -= 5;
        }
        else {
            pennies++;
            owed -= 1;
        }
    }
    printf("\nYou will use %d coins.\n", (quarters+dimes+nickels+pennies));
    
    // I print the counters for each type of coin used
    if (quarters > 0) printf("Quarters: %d\n", quarters);
    if (dimes > 0) printf("Dimes: %d\n", dimes);
    if (nickels > 0) printf("Nickels: %d\n", nickels);
    if (pennies > 0) printf("Pennies: %d\n", pennies);
    
}