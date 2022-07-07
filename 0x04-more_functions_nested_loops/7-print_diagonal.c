#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter variable
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int o, p;

	if (n > 0)
	{
		for (o = 1; o <= n; o++)
		{
			for (p = 1; p <= n; p++)
			{
				if (o == p)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
