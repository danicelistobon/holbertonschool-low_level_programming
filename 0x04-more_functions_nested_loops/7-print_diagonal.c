#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: diagonal
 *
 */
void print_diagonal(int n)
{
int d, s;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (d = 1; d <= n; d++)
	{
		if (n > 1)
		{
			for (s = 2; s <= d; s++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
