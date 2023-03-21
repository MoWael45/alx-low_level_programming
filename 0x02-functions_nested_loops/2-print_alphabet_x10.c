#include "main.h"

/**
 *  print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
