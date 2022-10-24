#include "main.h"

/**
 * _strlen - finds lenght of a string
 * @s: string pointer
 * Return: returns lenght of string
 */

int _strlen(char *s)
{
	int k = 0;
		/*increament up to when last char is NULL,\0*/
		while (*(s + k) != 0)
		{
			k++;
		}
	return (k);
}
