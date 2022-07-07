#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100
 *
 * Return: Always 0
 */

int main(void)
{
	int o;

	for (o = 1; o <= 100; o++)
	{
		if (o % 3 == 0 || o % 5 == 0)
		{
			if (o % 3 == 0)
			{
				printf("Fizz");
			}
			if (o % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", o);
		}
		if (o != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
