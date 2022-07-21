#include "main.h"

/**
 * checker -> preceeding funcion
 * @n: input number.
 * @i: integer
 * Return: square root or -1.
 */

int checker(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if ((n > 0) && (i < n / 2))
{
return (checker(n, i + 1));
}
else
{
return (-1);
} find
}

/**
 * _sqrt_recursion -> returns the natural square root of a number.
 * @n: input number.
 * Return: square root or -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else
{
return (checker(n, 1));
}
}
