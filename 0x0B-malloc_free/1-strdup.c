#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int count = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	d = malloc((sizeof(char) * count) + 1);

	if (d == NULL)
	{
		return (NULL);
	}
	else if (d == malloc(0))
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		d[i] = str[i];
	d[i] = '\0';
	return (d);
}
