#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int g;
	long int h;
	long long int i;
	float j;
	char k;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
