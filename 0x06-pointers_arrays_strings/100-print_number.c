#include "holberton.h"
/**
 * print_number - prints an integer
 *
 * @n: number
 *
 *
 */
void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar('-');
		c = n * -1;
	}
	else
	{
		c = n;
	}

	if (n / 10 != 0)
	{
		print_number(c / 10);
	}
	_putchar(c % 10 + '0');
}
