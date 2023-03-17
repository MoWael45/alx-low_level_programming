#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x = n % 10;

	if (x > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x == 0)
	{
	printf("Last digit of %d is %d and is 0", n, x);
	}
	else if (x < 6 && x != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	}
	return (0);
}
