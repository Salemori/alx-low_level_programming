#include <stdio.h>

/**
 * main -  prints an integer
 *
 * Return: Always 0.
 */

int main(void)
{
	long o, p;

	o = 612852475143;

	for (p = 2; o > p; p++)
	{
		while (o % p == 0)
		{
			o = o / p;
		}
	}
	printf("%lu", p);
	putchar('\n');
	return (0);
}
