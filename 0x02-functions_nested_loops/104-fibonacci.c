#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always (success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, i;

	printf("%d, %d, ", fib1, fib2);
	for (i = 3; i <= 98; i++)
	{
		fib3 = fib1 + fib2;
		printf("%d, ", fib3);
		if (i != 98)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
