#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line.
 * Return: Always (success)
 */
int main(void)
{
	int term1 = 1, term2 = 2, nextTerm, sum = 0;

	while (term1 <= 4000000)
	{
		if (term1 % 2 == 0)
		{
			sum += term1;
		}
		nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
	}
	printf("%d\n", sum);
	return (0);
}
