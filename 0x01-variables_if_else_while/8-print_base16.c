#include <stdio.h>
/**
 * main -> prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int dig;
	char alp;

	for (dig = 0; dig < 10; dig++)
		putchar((dig % 10) + '0');
	for (alp = 'a' ; alp <= 'f' ; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
