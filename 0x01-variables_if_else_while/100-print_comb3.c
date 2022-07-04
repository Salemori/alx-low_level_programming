#include <stdio.h>

/**
 * main -> prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int noa;
	int nob;

	for (noa = 0; noa < 9; noa++)
	{
		for (nob = noa + 1; nob < 10; nob++)
		{
			putchar((noa % 10) + '0');
			putchar((nob % 10) + '0');
			if (noa == 8 && nob == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
