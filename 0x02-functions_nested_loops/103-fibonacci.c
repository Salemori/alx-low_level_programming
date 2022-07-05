#include <stdio.h>

/**
 * main -> prints the sum of even-valued Fibonacci
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long no1 = 0, no2 = 1, ad;
	float t_ad;

	while (1)
	{
		ad = no1 + no2;
		if (ad > 4000000)
			break;

		if ((ad % 2) == 0)
			t_ad += ad;

		no1 = no2;
		no2 = ad;
	}
	printf("%.0f\n", t_ad);

	return (0);
}
