#include "main.h"

/**
 * factorial - returns the factorial of a given num
 * @n: input num
 * Return: factorial of the num
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
