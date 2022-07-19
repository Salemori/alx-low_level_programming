#include "main.h"

/**
* print_chessboard -> fills memory with a constant byte.
* @a: character
* unsigned integer
* Return: s which is character
*/

void print_chessboard(char (*a)[8])
{
int i = 0;
while (i < 8)
{
int y = 0;
while (y < 8)
{
_putchar (a[i][y]);
y++;
}
_putchar ('\n');
i++;
}
}
