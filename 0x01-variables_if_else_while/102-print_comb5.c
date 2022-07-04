#include <stdio.h>

/**
 * main -> prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int noa;
	int nob;

	for (noa = 0; noa <= 98; noa++)
	{
		for (nob = noa + 1; nob <= 99; nob++)
		{
			putchar((noa / 10) + '0');
			putchar((noa % 10) + '0');
			putchar(' ');
			putchar((nob / 10) + '0');
			putchar((nob % 10) + '0');

			if (noa == 98 && nob == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
