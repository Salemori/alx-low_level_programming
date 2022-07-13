#include "main.h"

/**
 * _strncat -> concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: byte to cat
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a++])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[b++] = src[a];
	}
	return (dest);
}
