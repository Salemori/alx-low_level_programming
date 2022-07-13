#include "main.h"
/**
 * leet - encodes a string into 1337
 * @st:string
 *
 * Return: string
 */

char *leet(char *st)
{
	int ad;
	int inc = 0;
	int up[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int no[] = {52, 51, 48, 55, 49};

	while (*(st + inc) != '\0')
	{
		for (ad = 0; ad < 5; ad++)
		{
			if (*(st + inc) == low[ad] || *(st + inc) == up[ad])
			{
				*(st + inc) = no[ad];
				break;
			}
		}
		inc++;
	}

	return (st);
}
