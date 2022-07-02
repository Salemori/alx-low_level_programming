#include <stdio.h>

/**
 * main -> program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
