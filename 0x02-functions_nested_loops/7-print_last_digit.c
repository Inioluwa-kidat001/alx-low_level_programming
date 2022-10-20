#include "main.h"
/**
 * print_last_digit - prints last digit of an int
 * @m:int to compute last digit
 * Return:last digit of int
 */
int print_last_digit(int m)
{
	int last_digit;

	last_digit = m % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last-digit + 0);
	return (last_digit);
}
