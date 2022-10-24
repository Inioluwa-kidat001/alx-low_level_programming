#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: input string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
