#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: The number that we will print from to 98
 * Return: all nature numbers from n to 98
 */

void print_to_98(int n)
{
if (n >= 98)
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf(" %d", n);
printf("\n");
break;
}
else
{
printf(" % d", n);
}
}
}
else
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf(" %d", n);
printf("\n");
break;
}
else
{
printf(" %d", n);
}
}
}
}
