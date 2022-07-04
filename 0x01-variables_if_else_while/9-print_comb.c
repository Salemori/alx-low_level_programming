#include <stdio.h>

/**
 * main -> prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int no[] = {'0', ',', ' ', '1', ',', ' ', '2', ',', ' ', '3',
	',', ' ', '4', ',', ' ', '5', ',', ' ', '6', ',', ' ', '7',
	',', ' ', '8', ',', ' ', '9'};

	int x;

	for (x = 0; x <= 28; x++)
		putchar(no[x]);
	putchar('\n');
	return (0);
}
