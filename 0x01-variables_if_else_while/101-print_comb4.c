#include <stdio.h>

/**
 *main -> prints all possible combinations of three different digits
 *
 * Return: Always 0
 */

int main(void)
{
	int noa;
	int nob;
	int noc;

	for (noa = 0; noa < 8; noa++)
	{
		for (nob = noa + 1; nob < 9; nob++)
		{
			for (noc = nob + 1; noc < 10; noc++)
			{
				putchar((noa % 10) + '0');
				putchar((nob % 10) + '0');
				putchar((noc % 10) + '0');

				if (noa == 7 && nob == 8 && noc == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
