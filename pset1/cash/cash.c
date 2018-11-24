#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Declare float variable to store amount of change
    float change;
    int coin_number, quarters, dimes, nickels, pennies;

    // Request amount of change
    do
    {
        printf("Please specify the amount of change: ");
        change = get_float();
    }
    while (change < 0);

    printf("Change owed: %.2f \n", change);

    // Calculate # of coins needed to make change
    change = change * 100;
    int cents = roundf(change);

    if (cents >= 25)
    {
        quarters = cents / 25;
        cents = cents - (quarters * 25);
    }
    else
    {
        quarters = 0;
    }

    if (cents >= 10)
    {
        dimes = cents / 10;
        cents = cents - (dimes * 10);
    }
    else
    {
        dimes = 0;
    }

    if (cents >= 5)
    {
        nickels = cents / 5;
        cents = cents - (nickels * 5);
    }
    else
    {
        nickels = 0;
    }

    pennies = cents;

    // Declare # of coins needed to make change
    coin_number = quarters + dimes + nickels + pennies;
    printf("%d \n", coin_number);
}