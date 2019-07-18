#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: pointer to pointer
 *
 * @height: int
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(*(grid + c));
	}
	free(grid);
}
