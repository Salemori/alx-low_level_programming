#include "main.h"

/**
 * infinite_add -> adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer used to store the result
 * @size_r: buffer size
 *
 * Return: result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int dig;
	int inc;

	inc = 0;
	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		dig = ((*n1 - '0') + (*n2 - '0'));
		dig += inc;
		*(r + size_r) = ((dig % 10) + '0');
		inc = dig / 10;
	}
	for (; *n1; n1--, size_r++)
	{
		dig = *(n1 - '0') + inc;
		*(r + size_r) = (dig % 10) + '0';
		inc = dig / 10;
	}
	for ( ; *n2; n2--, size_r--)
	{
		dig = (*n2 - '0') + inc;
		*(r + size_r) = (dig % 10) + '0';
		dig = dig / 10;
	}
	return (r);
}
