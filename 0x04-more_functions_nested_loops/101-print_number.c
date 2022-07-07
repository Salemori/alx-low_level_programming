#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter variable
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int dig = n;

	if (n < 0)
	{
		_putchar('-');
		dig = -dig;
	}
	if (dig > 9)
	{
		print_number(dig / 10);
	}
	_putchar(dig % 10 + '0');
}
