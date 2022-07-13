#include "main.h"
/**
 * rot13 -> encodes a string using rot13
 * @st: string
 * Return: string
 */

char *rot13(char *st)
{
	int ad;
	int inc = 0;
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char key[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(st + inc) != '\0')
	{
		for (ad = 0; ad < 52; ad++)
		{
			if (*(st + inc) == let[ad])
			{
				*(st + inc) = key[ad];
				break;
			}
		}
		inc++;
	}

	return (st);
}
