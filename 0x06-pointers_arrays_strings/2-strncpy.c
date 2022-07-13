#include "main.h"

/**
 * _strcpy -> copies a string.
 * @dest: first string
 * @scr: second string
 * @n: byte to be used
 *
 * Return: dest
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
