#include "main.h"

/**
 * _strcpy - copies string pointed by @src,including
 * termination of null byte,pointed @dest
 * @dest: buffer to copy string to
 * @src: a copy source string
 *
 * Return: a pointer to the destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
