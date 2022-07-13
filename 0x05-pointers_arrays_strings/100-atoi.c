#include "main.h"

/**
* _atoi -> convert a string to an integer.
* @s: pointer variable
*
* Return: converter integer
*/

int _atoi(char *s)
{
	unsigned int p = 0, sz = 0, x = 0, n = 1, m = 1, l;

	while (*(s + p) != '\0')
	{
		if (sz > 0 && (*(s + p) < '0' || *(s + p) > '9'))
			break;

		if (*(s + p) == '-')
			n *= -1;

		if ((*(s + p) >= '0') && (*(s + p) <= '9'))
		{
			if (sz > 0)
				m *= 10;
			sz++;
		}
		p++;
	}

	for (l = p - sz; l < p; l++)
	{
		x = x + ((*(s + l) - 48) * m);
		m /= 10;
	}
	return (x * n);
}
