#include "main.h"

/**
 * print_number - prints an integer
 * @n - parameter variable
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int c;
	int b, a;

	a = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		c = n;
	while (c / a > 9)
	{
		a = a * 10;
	}
	while (a > 0)
	{
		b = c / a;
		c = c % a;
		_putchar (b + '0');
		a = a / 10;
	}
	}
}
