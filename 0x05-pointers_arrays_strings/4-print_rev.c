#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer
 *
 * Return: string
 */
void print_rev(char *s)
{
	int c = 0, r;

	while (*(s + c) != '\0')
	{
		c++;
	}
	r = c - 1;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
