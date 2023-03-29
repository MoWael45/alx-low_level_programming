#include "main.h"
/**
 * _strlen - returns the length of string
 *
 * description : return the length of string
 *
 * @s: string parameter input
 *
 * Return: always length of string (success)
 */

int _strlen(char *s)
{
int counter;

for (counter = 0; *s != '\0'; s++)
++counter;

return (counter);
}
