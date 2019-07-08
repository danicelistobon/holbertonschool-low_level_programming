#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer
 *
 * @accept: character
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int c, d;

	c = 0;
	d = 0;

	for (c = 0; *(s + c) > ' '; c++)
	{
		for (d = 0; *(accept + d) != '\0'; d++)
		{
			if (*(accept + d) == *(s + c))
			{
				return (s + c);
			}
		}
	}
	return (0);
}
