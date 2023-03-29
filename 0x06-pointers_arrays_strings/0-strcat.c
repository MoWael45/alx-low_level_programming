#include "main.h"
#include <stdio.h>

/**
 * _stract - function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

dest[dlen] = '\0';
return (dest);
}
