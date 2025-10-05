#include <stdio.h>

int main(void)
{
    int cents;

    // Prompt the user until they enter a non-negative value
    do
    {
        printf("Change Owed: ");
        scanf("%d", &cents);
    }
    while (cents < 0);

    int coins = 0;

    // Quarters
    coins += cents / 25;
    cents %= 25;

    // Dimes
    coins += cents / 10;
    cents %= 10;

    // Nickels
    coins += cents / 5;
    cents %= 5;

    // Pennies
    coins += cents;

    printf("%i\n", coins);
}
