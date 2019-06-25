#include "holberton.h"
/**
 * _islower - Checks for lowercase character
 * @c: character
 * Return: return 1 if is lowercase or 0 otherwise
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
