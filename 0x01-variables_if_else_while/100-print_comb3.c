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

	for (noa = 0; noa < 10; noa++)
	{
		for (nob = 0; nob < 10; nob++)
		{
			putchar((noa % 10) + '0');
			putchar((nob % 10) + '0');
			if (noa == 9 && nob == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
