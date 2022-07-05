#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int noa;
	int nob;
	int noc;

	for (noa = 0; noa <= 9; noa++)
	{
		_putchar('0');

		for (nob = 1; nob <= 9; nob++)
		{
			_putchar(',');
			_putchar(' ');

			noc = noa * nob;

			if (noc <= 9)
				_putchar(' ');
			else
				_putchar((noc / 10) + '0');

			_putchar((noc % 10) + '0');
		}
		_putchar('\n');
	}
}
