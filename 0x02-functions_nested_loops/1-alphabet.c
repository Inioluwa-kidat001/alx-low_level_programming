#include "main.h"

/**
 * print_alphabet -  prints all alphabets in lower case
 * Return: On success 1
 *
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
