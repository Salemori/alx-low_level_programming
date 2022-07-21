#include <main.h>

/**
 * scout - detects if an input number is a prime number.
 * @n: input number.
 * @m: integer
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int scout(int n, int m)
{
if (m == 1)
{
return (1);
}
else
{
if (n % m == 0)
{
return (0);
}
else
{
return (scout(n, m - 1));
}
}
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (scout(n, n / 2));
}
}
