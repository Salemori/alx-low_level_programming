#include <main.h>

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 * scout - m
 * @m: h
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
return (scout(n, m-1));
}
}
}
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return(scout(n, n/2));
}
}
