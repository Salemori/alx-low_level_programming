#include "main.h"

/**
 * _strncpy -> copies a string.
 * @dest: first string
 * @src: second string
 * @n: byte to copy
 *
 * Return: first string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
