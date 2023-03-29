#include "main.h"

/**
 * _stract - function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: The number of bytes from src to be appened to dest
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	/*iterate through each src array value without null byte*/
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
