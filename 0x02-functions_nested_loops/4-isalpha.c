#include "holberton.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: character
 * Return: return 1 if is a letter or 0 otherwise
 */
int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
{
	return (1);
}
else if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
