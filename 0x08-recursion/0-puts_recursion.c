#include "holberton.h"
/**
 * _puts_recursion - prints a string
 *
 * @s: pointer
 *
 */
void _puts_recursion(char *s)
{
	_putchar (*s);

	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar ('\n');
	}
}
