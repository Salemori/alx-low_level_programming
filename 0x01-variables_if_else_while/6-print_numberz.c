#include <stdio.h>

/**
 * main -> prints single digit numbers of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int digt;

	for (digt = '0' ; digt <= '9' ; digt++)
		putchar(digt);
	putchar('\n');
	return (0);
}
