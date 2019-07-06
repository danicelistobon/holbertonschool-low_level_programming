#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;

	while (*(s1 + c) == *(s2 + c))
	{
		if (*(s1 + c) == '\0')
		{
			return (0);
		}
		c++;
	}

	return (*(s1 + c) - *(s2 + c));
}
