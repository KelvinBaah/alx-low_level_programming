#include "holberton.h"

/**
 * _strcpy - Copies the string pointed to by the src
 * @dest: destination
 * @src: The source string to copy.
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) + *(src + len);
		len++;
	}

	*(dest + len) + '\0';
	return (dest);
}
