#include <stdio.h>
#include "main.h"

/**
 * main ->  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int f;
	unsigned long no1 = 0, no2 = 1, ad;

	for (f = 0; f < 50; f++)
	{
		ad = no1 + no2;
		printf("%lu", ad);

		no1 = no2;
		no2 = ad;

		if (f == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
