#include "main.h"
#include <stdio.h>

/**
 * _strcpy -> copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination
 * @src: source
 *
 *Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (p >= 0)
	{
		*(dest + p) = *(src + p);
		if (*(src + p) == '\0')
			break;
		p++;
	}
	return (dest);
}
