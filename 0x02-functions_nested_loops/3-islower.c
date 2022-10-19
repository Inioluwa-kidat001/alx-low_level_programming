#include "main.h"
/**
 * _islower - checks if a character c is lowercase
 * @c: charater to check
 * Return:1 if character is lowercase,otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
