#include "holberton.h"
/**
 * print_square - Prints a square
 * @size: square
 *
 */
void print_square(int size)
{
int l1, l2;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (l1 = 1; l1 <= size; l1++)
	{
		for (l2 = 1; l2 <= size; l2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
