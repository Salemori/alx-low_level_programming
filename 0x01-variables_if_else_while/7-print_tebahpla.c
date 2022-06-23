#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return - Always 0
 */

int main(void)
{
	char lalpha;
	
	for(lalpha = 'z' ; lalpha >= 'a' ; lalpha--)
		putchar(lalpha);
	return (0);
}

