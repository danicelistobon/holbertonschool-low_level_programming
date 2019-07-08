#include "holberton.h"
/**
 * puts_half - prints half of a string
 *
 * @str: pointer
 *
 * Return: string
 */
void puts_half(char *str)
{
	int c, d;

	while (*(str + c) != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	{
		for (d = (c / 2); *(str + d) != '\0'; d++)
		{
			_putchar(*(str + d));
		}
	}
	else if (c % 2 != 0)
	{
		for (d = ((c - 1) / 2); *(str + d) != '\0'; d++)
		{
			_putchar(*(str + d));
		}
	}
	_putchar('\n');
}
