#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *p;
	int size;
	int i = 0, j = min;

	if (min > max)
		return (0);
	size = max - min;
	p = malloc((size + 1) * (sizeof(*p)));
	if (!p)
		return (0);
	while (i <= max - min)
		p[i++] = j++;
	return (p);
}
