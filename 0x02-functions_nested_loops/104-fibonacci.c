#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always (success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, count = 2;

	printf("%d, %d, ", fib1, fib2);
	while (count < 98)
	{
		int fib3 = fib1 + fib2;

		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
		count++;
	}
	int fib3 = fib1 + fib2;

	printf("%d\n", fib3);
	return (0);
}
