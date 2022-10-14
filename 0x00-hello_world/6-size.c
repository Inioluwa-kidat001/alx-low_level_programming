#include <stdio.h>
/**
 * main-Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %lu bytes(s)\n", sizeof (char));
	printf("Size of an int: %lu byte(s)\n", sizeof (int));
	printf("Size of long int: %lu byte(s)\n", sizeof (long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof (long long));
	printf("Size of float is %lu byte(s)\n", sizeof (float));
	return (0);
}
