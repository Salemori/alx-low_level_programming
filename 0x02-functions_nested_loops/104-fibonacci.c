#include <stdio.h>

/**
  * main - print the first 98 fibonacci numbers.
  * Return: Always 0
  */

int main(void)
{
	int ad;
	unsigned long a, b, c;
	unsigned long d, e, f, mv;

	ad = 0;
	a = 0;
	b = 1;
	for (ad = 1; ad <= 91; ad++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	d = a % 1000;
	a = a / 1000;
	e = b % 1000;
	b = b / 1000;
	while (ad <= 98)
	{
		mv = (d + e) / 1000;
		f = (d + e) - mv * 1000;
		c = (a + b) + mv;
		d = e;
		e = f;
		a = b;
		b = c;
		if (f >= 100)
			printf("%lu%lu", c, f);
		else
			printf("%lu0%lu", c, f);
		if (ad != 98)
			printf(", ");
		ad++;
	}
	putchar('\n');
	return (0);
}
