#include "holberton.h"
/**
 * _strlen_recursion - length of a string
 *
 * @s: pointer
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * aux_pal - auxiliary function for the palindrome strings
 *
 * @s: pointer
 *
 * @l: length
 *
 * @c: counter
 *
 * Return: result
 */
int aux_pal(char *s, int l,  int c)
{
	if (c >= l)
	{
		return (1);
	}
	else if (*(s + l) == *(s + c))
	{
		return (aux_pal(s, l - 1, c + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - finds palindrome strings
 *
 * @s: string
 *
 * Return: returns 1 if s is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s), c = 0;

	return (aux_pal(s, l - 1, c));
}
