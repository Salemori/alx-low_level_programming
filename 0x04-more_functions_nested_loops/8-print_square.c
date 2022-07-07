#include "main.h"

/**
 * print_square -  checks for checks for a digit (0 through 9).
 * @size: parameter variable
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int o, p;

	if (size > 0)
	{
		for (o = 1; o <= size; o++)
		{
			for (p = 1; p <= size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
