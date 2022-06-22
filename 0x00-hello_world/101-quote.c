#include <stdio.h>
#include <stdlib.h>

/* A simple program that prints using another output option */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
