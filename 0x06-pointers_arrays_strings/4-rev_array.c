#include "main.h"

/**
 * reverse_array -> reverses the content of an array of integers.
 * @a: array of interger
 * @n number of element to reverse
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			z = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = z;
		}
	}
}
