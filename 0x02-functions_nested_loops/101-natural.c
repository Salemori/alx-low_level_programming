#include <stdio.h>

/**
 * main -> lists all the natural numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int p, ad = 0;

	for (p = 0; p < 1024; p++)
	{
		if ((p % 3) == 0 || (p % 5) == 0)
			ad += p;
	}

	printf("%d\n", ad);

	return (0);
}
