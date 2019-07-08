#include "holberton.h"
/**
 * *_strspn - gets the length of a prefix substring
 *
 * @s: pointer
 *
 * @accept: character
 *
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, d, e;

	for (c = 0; *(s + c) > ' '; c++)
	{
		for (d = 0; *(accept + d) != '\0'; d++)
		{
			if (*(accept + d) == *(s + c))
			{
				e = e + 1;
			}
		}
	}
	return (e);
}
