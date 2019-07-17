#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: int
 *
 * @height: int
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **dp, c, d;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	dp = malloc(height * sizeof(*dp));

	if (dp == NULL)
	{
		free(dp);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		*(dp + c) = malloc(width * sizeof(int));
		if (*(dp + c) == NULL)
		{
			free(dp);

			for (d = 0; d < c; d++)
			{
				free(*(dp + c));
			};

			return (NULL);
		}
		for (d = 0; d < width; d++)
		{
			*(*(dp + c) + d) = 0;
		}
	}
	return (dp);
}
