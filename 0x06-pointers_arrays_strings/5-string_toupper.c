#include "main.h"
/**
 * string_toupper -> changes all lowercase letters of a string to uppercase.
 * @st: string.
 *
 * Return: string
 */

char *string_toupper(char *st)
{
	int x;

	x = 0;
	while (*(st + x) != '\0')
	{
		if ((*(st + x) >= 97) && (*(st + x) <= 122))
			*(st + x) = *(st + x) - 32;
		x++;
	}

	return (st);
}
