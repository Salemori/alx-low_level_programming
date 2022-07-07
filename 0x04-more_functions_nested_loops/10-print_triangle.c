#include "main.h"

/**
 * print_triangle -  prints a triangle
 *@size: parameter variable
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int o, p;

	if (size > 0)
	{
		for (o = 1; o <= size; o++)
		{
			for (p = 1; p <= size; p++)
			{
				if (p <= size - o)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
