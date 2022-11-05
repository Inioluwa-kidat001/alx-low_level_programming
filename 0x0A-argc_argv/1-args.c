#include <stdio.h>
#include <stdlib.h>

/**
 * nain - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
