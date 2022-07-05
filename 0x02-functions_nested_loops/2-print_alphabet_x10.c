#include "main.h"

/**
 * print_alphabet_x10 -> prints ten times the alphabet, in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char alp;

	while (num++ <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
