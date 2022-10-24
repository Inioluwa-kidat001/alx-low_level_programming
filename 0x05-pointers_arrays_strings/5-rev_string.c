#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int m = 0, len = 0;
	char tmp;

	while (s[m++])
		len++;

	for (m = len - 1; m >= len / 2; m--)
	{
		tmp = s[m];
		s[m] = s[len - m - 1];
		s[len - m - 1] = tmp;
	}
}
