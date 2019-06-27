#include "holberton.h"
/**
 * print_triangle - Prints a triangle
 * @size: triangle
 *
 */
void print_triangle(int size)
{
int t, s, r;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (t = 1; t <= size; t++)
	{
		for (s = 1; s <= (size - t); s++)
		{
			_putchar(' ');
		}
		for (r = 1; r <= t; r++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
_putchar('\n');
}
}
