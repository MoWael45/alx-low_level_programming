#include "main.h"

/**
 * print_line - draws a straight line in the teminal
 * @n: The number of times the character _ should be printed
 * Return: _
 */

void print_line(int n)
{

int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
