#include "main.h"

/**
* _strstr -> fills memory with a constant byte.
* @haystack: character
* @needle: character 2
* Return: s which is character
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *hay = haystack;
char *need = needle;
while (*hay == *need && *need != '\0')
{
hay++;
need++;
}
if (*need == '\0')
return (haystack);
}
return ("\0");
}
