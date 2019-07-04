#include "holberton.h"
/**
 * *_strncpy - copies a strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: number of bytes
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;

	while (c < n && *(src + c) != '\0')
	{
		*(dest + c) = *(src + c);
		c++;
	}
	while (c < n)
	{
		*(dest + c) = '\0';
		c++;
	}

	return (dest);
}
