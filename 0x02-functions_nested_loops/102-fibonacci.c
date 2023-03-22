#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always (success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib3, count = 2;

	printf("%lu, %lu, ", fib1, fib2);
	while (count < 49)
	{
		fib3 = fib1 + fib2;
		printf("%lu, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
		count++;
	}
	fib3 = fib1 + fib2;
	printf("%lu\n", fib3);
	return (0);
}
