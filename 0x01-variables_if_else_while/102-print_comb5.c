#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, count;

count = 0;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
for (k = j + 1; k <= 9; k++)
{
if (count > 0)
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
count++;
}
}
}
putchar('\n');
return (0);
}
