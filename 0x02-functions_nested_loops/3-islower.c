#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowrcase character or 0 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 127)
{
return (1);
}
else
return (0);
}
