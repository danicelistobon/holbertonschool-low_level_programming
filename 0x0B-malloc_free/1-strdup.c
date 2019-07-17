#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: pointer
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int c, d;
	char *cr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; *(str + c) != '\0'; c++)
	{
		;
	}
	if (c < 1)
	{
		return (NULL);
	}

	cr = (char *) malloc(c * sizeof(char));

	if (cr == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < c; d++)
	{
		*(cr + d) = *(str + d);
	}
	*(cr + d) = '\0';

	return (cr);
}
