#include <stdio.h>

/**
 * main -> prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		putchar((no % 10) + '0');
		if (no == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
