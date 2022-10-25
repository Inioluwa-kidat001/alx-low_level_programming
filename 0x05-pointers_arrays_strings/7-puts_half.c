#include "main.h"

/**
 * puts_half - prints half of string
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int r = 0, len = 0, p;

	while (str[r++])
		len++;

	if ((len % 2) == 0)
		p = len / 2;

	else
		p = (len + 1) / 2;

	for (r = p; r < len; r++)
		_putchar(str[r]);

	_putchar('\n');
}
