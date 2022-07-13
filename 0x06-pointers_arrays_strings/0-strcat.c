#include "main.h"

/**
 * _strcat -> concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: first string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		++a;
	}
	for (b = 0; src[b] != '\0'; ++b, ++a)
	{
		dest[a] = src[b];
	}
		dest[a] = '\0';
	return (dest);
}
