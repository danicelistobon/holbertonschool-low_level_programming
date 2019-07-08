#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer
 *
 * @b: constant
 *
 * @n: bytes
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	c = 0;

	while (c < n)
	{
		*(s + c) = b;
		c++;
	}
	return (s);
}
