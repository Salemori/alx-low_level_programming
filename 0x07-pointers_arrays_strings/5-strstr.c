#include "main.h"

/**
* _strstr -> fills memory with a constant byte.
* @haystack: character
* @needle: character 2
* Return: s which is character
*/

char *_strstr(char *haystack, char *needle)
{
	char *ah;
	char *an;

	while (*haystack != '\0')
	{
		ah = haystack;
		an = needle;

		while (*haystack != '\0' && *an != '\0' && *haystack == *an)
		{
			haystack++;
			an++;
		}
		if (!*an)
			return (ah);
		haystack = ah + 1;
	}
	return (0);
}
