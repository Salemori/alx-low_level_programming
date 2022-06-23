#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * 
 * Return: Always 0
 */
int main(void)
{
	int o;
	
	for (o = '0'; o <= '9'; o++)
		putchar(o);
	if (o != '9')
		putchar(',');
		putchar('');
	putchar('\n');
	return (0);
}
