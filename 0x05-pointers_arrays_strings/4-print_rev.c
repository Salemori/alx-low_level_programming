#include "main.h"

/**
 * print_rev -> prints a string, in reverse, followed by a new line.
 * @s: pointer variable
 *
 *Return: Nothing
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0') 
	{
		p++;
	}
		while (s[p] == '\0' || s[p] >= -1)
		{
			p--;	
			_putchar(s[p]);
		}
	_putchar('\n');
}
