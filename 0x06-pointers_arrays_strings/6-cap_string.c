#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @st: string
 *
 * Return: string
 */

char *cap_string(char *st)
{
	int n;
	int a;
	int rev[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	n = 0;
	if (*(st + n) >= 97 && *(st + n) <= 122)
		*(st + n) = *(st + n) - 32;
	n++;
	while (*(st + n) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(st + n) == rev[a])
			{
				if ((*(st + (n + 1)) >= 97) && (*(st + (n + 1)) <= 122))
					*(st + (n + 1)) = *(st + (n + 1)) - 32;
				break;
			}
		}
		n++;
	}
	return (st);
}
