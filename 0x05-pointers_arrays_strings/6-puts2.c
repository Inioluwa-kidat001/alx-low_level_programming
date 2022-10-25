#include "main.h"

/**
 * puts2 - prints one char between two
 * @str: contains char
 *
 * Return: void
 */

void puts2(char *str)
{
	int k = 0, len = 0;

	while (str[k++])
		len++;

	for (k = 0; k < len; k += 2)
		_putchar(str[k]);

	_putchar('\n');
}
