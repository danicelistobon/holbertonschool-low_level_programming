#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer
 *
 * @n: number of elements
 *
 * Return: string
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", *(a + c));
		if (c != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
