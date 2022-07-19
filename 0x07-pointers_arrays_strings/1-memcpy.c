#include "main.h"

/**
* _memcpy -> Returns a pointer to the first occurrence of the
*character c in the string s, or NULL if the character is not found
* @dest: character
* @src: unsigned integer
* @n: inteder
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
