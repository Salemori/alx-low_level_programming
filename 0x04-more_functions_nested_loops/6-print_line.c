#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: parameter variable
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}