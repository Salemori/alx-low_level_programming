#include "main.h"
#include <stdio.h>

/**
 * print_array -> returns the length of a string.
 * @a: pointer variable
 * @n: nth number
 *
 *Return: Always 0
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n ; p++)
	{
		if (p != n - 1)
			printf("%d, ", a[p]);
		else
			printf("%d", a[p]);
	}
	printf("\n");
}
