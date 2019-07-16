#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 *
 * @c: character
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cr;

	cr = (char *) malloc(size * sizeof(c));

	if (cr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(cr + i) = c;
	}
	return (cr);
}
