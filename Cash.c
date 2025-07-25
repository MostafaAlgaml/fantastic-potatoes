#include <cs50.h>
#include <stdio.h>
int calculate_quarters( int change );
int calculate_tens( int change );
int calculate_fives( int change );
int calculate_ones( int change );

int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);

    int quarters = calculate_quarters(change);
    change -= quarters * 25;

    int tens = calculate_tens(change);
    change -= tens * 10;

    int fives = calculate_fives(change);
    change -= fives * 5;

    int ones = calculate_ones(change);
    change -= ones * 1;

    int total = quarters + tens + fives + ones;
    printf("%i\n", total);
}

int calculate_quarters(int change)
{
    return change / 25;
}
int calculate_tens(int change)
{
    return change / 10;
}
int calculate_fives(int change)
{
    return change / 5;
}
int calculate_ones(int change)
{
    return change / 1;
}
