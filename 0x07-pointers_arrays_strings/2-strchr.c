#include "main.h"

/**
*_strchr - w
* @s: character
* @c: unsigned integer
* Return: s which is character
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s != c)
{
return ('\0');
}
return (s);
}
