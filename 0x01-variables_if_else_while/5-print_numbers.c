#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 starting from 0 
 *
 * Return - Always 0
 */

int main(void)
{
	int dig;
	dig = 0;
	
	while(dig < 10)
		printf("%d\n", dig);
	dig++;
	return (0);
}

