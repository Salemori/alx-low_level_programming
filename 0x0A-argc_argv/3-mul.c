#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*@argc: number of command line arguments
*@argv: array containing the program command line arguments
*return: always 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
