#include "main.h"

/**
<<<<<<< HEAD
 * _memcpy - memory copy
 * @dest: destination
 * @src: source
 * @n: no of bytes to copy
 * Return: string from source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
=======
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

>>>>>>> 67a07df4442f40d0a08f0595bfb5dcc95ca30aa8
	return (dest);
}
