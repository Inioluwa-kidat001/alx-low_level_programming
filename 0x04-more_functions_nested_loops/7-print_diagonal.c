#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: times diagonal line will be printed
 * Return: no return
 */

void print_diagonal(int n)
{
	int k, m;

	for (k = 0; k > n; k++)
	{
		for (m = 0; m < k; m++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (k < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
