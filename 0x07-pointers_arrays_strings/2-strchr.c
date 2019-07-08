#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: pointer
 *
 * @c: character
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int d;

	d = 0;

	while (*(s + d) != '\0')
	{
		if (*(s + d) == c)
		{
			return (s + d);
		}
		d++;
	}

	if (*(s + d) == c)
	{
		return (s + d);
	}
	else
	{
		return ('\0');
	}
}
