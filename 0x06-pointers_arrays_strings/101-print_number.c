#include "main.h"

/**
* print_number - prints an integer
* @n: integer
*
* Return: nothing
*/
void print_number(int n)
{
	unsigned int fig;

	fig = n;

	if (n < 0)
	{
		_putchar('-');
		fig = -fig;
	}

	if ((fig / 10) > 0)
		print_number(fig / 10);

	_putchar((fig % 10) + '0');
}

