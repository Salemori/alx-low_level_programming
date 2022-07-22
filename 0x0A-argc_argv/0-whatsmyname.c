#include <stdio.h>

/**
*main - entry point
*@argc: number of command line arguments
*@argv: array containing the program command line arguments
*return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
