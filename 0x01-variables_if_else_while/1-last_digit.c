#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Assign a random number to the variable n
 * each time it is executed.
 * Print the last digit of the number stored
 * in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;
	char *str;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		str = "and is greater than 5";
	} else if (last_digit == 0)
	{
		str = "and is 0";
	} else if (last_digit < 6 && last_digit != 0)
	{
		str = "and is less than 6 and not 0";
	}

	printf("Last digit of %d is %d %s\n", n, last_digit, str);
	return (0);
}
