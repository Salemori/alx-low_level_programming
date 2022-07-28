#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int str1 = 0, str2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str1] != '\0')
		str1++;
	while (s2[str2] != '\0')
		str2++;
	if (n > str2)
		n = str2;
	p = malloc((str1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (i = 0; i < str1; i++)
		p[i] = s1[i];
	for (; i < (str1 + n); i++)
		p[i] = s2[i - str1];
	p[i] = '\0';
	return (p);
}
