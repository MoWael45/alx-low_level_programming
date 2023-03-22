#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always (success)
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, count = 2;

	printf("%d, %d, ", fib1, fib2);
	while (count < 50)
	{
		fib3 = fib1 + fib2;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
		count++;
	}
	fib3 = fib1 + fib2;
	printf("%d\n", fib3);
	return (0);
}
