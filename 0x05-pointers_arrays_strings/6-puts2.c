#include "main.h"

/**
 * puts2 -> returns the length of a string.
 * @str: pointer variable
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int p = 0;

	while (p >= 0)
	{
		if (str[p] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (p % 2 == 0)
			_putchar(str[p]);
		p++;
	}
}
