#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: array
 *
 * @size: size
 *
 */
void print_diagsums(int *a, int size)
{
	int c, s1, s2;

	s1 = 0;
	s2 = 0;

	for (c = 0; c < (size * size); )
	{
		s1 = s1 + *(a + c);
		c = c + size + 1;
	}
	c = size -  1;
	while (c < ((size * size) - 1))
	{
		s2 = s2 + *(a + c);
		c = c + size - 1;
	}
	printf("%d, %d\n", s1, s2);
}
