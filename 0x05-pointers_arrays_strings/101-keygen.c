#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main ->  generates random valid passwords for the program
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 0, m = 0;
	time_t o;

	srand((unsigned int) time(&o));
	while (m < 2772)
	{
		n = rand() % 128;
		if ((m + n) > 2772)
			break;
		m = m + n;
		printf("%c", n);
	}
	printf("%c\n", (2772 - m));
	return (0);
}
