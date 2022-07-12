#include "main.h"

/**
 * puts_half -> returns the length of a string.
 * @str: pointer variable
 *
 *Return: Always 0
 */

void puts_half(char *str)
{
	int p = 0, a;

	while (p >= 0)
	{
		if (str[p] == '\0')
			break;
		p++;
	}

	if (p % 2 == 1)
	{
		a = p / 2;
	}
	else
	{
		a = (p - 1) / 2;
	}
	for (a++; a < p; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
