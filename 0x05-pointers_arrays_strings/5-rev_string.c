#include "main.h"

/**
 * rev_string -> reverses a string.
 * @s: pointer variable
 *
 *Return: Nothing
 */

void rev_string(char *s)
{
	int p = 0, a, b;
	char *rep, rev;

	while (p >= 0)
	{
		if (s[p] == '\0')
			break;
		p++;
	}
	rep = s;

	for (a = 0; a < (p - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			rev = *(rep + b);
			*(rep + b) = *(rep + (b - 1));
			*(rep + (b - 1)) = rev;
		}
	}
}
