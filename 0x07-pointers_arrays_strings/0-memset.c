#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * _memset - set a memory string
 * @s: string
 * @n: int
 * @b: char
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
=======

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
>>>>>>> 67a07df4442f40d0a08f0595bfb5dcc95ca30aa8

	return (s);
}
