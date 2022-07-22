#include <stdio.h>

/**
*main - entry point
*@argc: number of command line arguments
*@argv: array containing the program command line arguments
*return: always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
