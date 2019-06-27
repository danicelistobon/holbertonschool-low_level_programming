#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: line
 *
 */
void print_line(int n)
{
int l;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (l = 1; l <= n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
}
