#include "main.h"

/**
* _atoi -> convert a string to an integer.
* @s: pointer variable
*
* Return: n *p
*/

int _atoi(char *s)
{
	int p = 1;
	unsigned int n = 0;

	do {
	if (*s == '-')
		p *= -1;
	else if (*s >= '0' && *s <= '9')
		n = n * 10 + (*s - '0');
	else if (n > 0)
		break;
	} while (*s++);

	return (n *p);
}
