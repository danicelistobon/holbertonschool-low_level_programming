#include "holberton.h"
/**
 * *_memcpy - copies memory area
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: bytes
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;

	while (c < n)
	{
		*(dest + c) = *(src + c);
		c++;
	}
	return (dest);
}
