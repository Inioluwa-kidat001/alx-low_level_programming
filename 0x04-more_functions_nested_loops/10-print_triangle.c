#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: number of lines
 * Return: no return
 */

void print_triangle(int size)
{
	int i, k, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i + 1); j++)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar(35);
		_putchar('\n');
	}
	_putchar('\n');
}
