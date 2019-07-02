#include "holberton.h"
/**
 * _puts - prints a string
 *
 * @str: pointer
 *
 * Return: string
 */
void _puts(char *str)
{
	int p = 0;

	while (*(str + p) != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
