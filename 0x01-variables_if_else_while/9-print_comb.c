#include <stdio.h>

/**
 * main -> prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int digt;

	for (digt = 48; digt <= 57; digt++)
		putchar(digt);
	if (digt != 57)
		putchar(44);
		putchar(32);
	putchar(10);
	return (0);
}
