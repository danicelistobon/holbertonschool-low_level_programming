#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *array_range - creates an array of integers
*
* @min: minimum value given
*
* @max: maximum value given
*
* Return: 0
*/
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * (min + max + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
