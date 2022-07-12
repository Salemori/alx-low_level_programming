#include "main.h"

/**
 * swap_int -> swaps the values of two integers.
 * @a: first integer pointer.
 * @b: second interger pointer.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
