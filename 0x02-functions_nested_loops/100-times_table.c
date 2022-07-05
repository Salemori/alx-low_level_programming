#include "main.h"

/**
 * print_times_table - prints input's times table,
 * starting with 0.
 * @n: value of the times table to be printed.
 */
void print_times_table(int n)
{
	int no1;
	int no2;
	int no3;

	if (n >= 0 && n <= 15)
	{
		for (no1 = 0; no1 <= n; no1++)
		{
			_putchar('0');

			for (no2 = 1; no2 <= n; no2++)
			{
				_putchar(',');
				_putchar(' ');

				no3 = no1 * no2;

				if (no3 <= 99)
					_putchar(' ');
				if (no3 <= 9)
					_putchar(' ');

				if (no3 >= 100)
				{
					_putchar((no3 / 100) + '0');
					_putchar(((no3 / 10)) % 10 + '0');
				}
				else if (no3 <= 99 && no3 >= 10)
				{
					_putchar((no3 / 10) + '0');
				}
				_putchar((no3 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
