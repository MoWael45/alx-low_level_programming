#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always (success)
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
