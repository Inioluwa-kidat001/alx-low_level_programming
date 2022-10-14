#include <stdio.h>

/**
 * main - print tge size of various types
 *
 * Description: prints the size of various size types on the computer it is compiled
 * and run on
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof (int));
	printf("Size of long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
