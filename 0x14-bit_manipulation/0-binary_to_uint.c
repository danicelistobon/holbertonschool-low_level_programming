#include "holberton.h"
/**
* _pow_recursion - returns the value of 2 raised to the power of x
*
* @x: power
*
* Return: result
*/
int _pow_recursion(int x)
{
	if (x == 0)
	{
		return (1);
	}
	else if (x < 0)
	{
		return (-1);
	}
	else
		return (2 * (_pow_recursion(x - 1)));
}
/**
* binary_to_uint - converts a binary number to an unsigned int
*
* @b: binary given
*
* Return: the converted number, or 0 if there is one or more chars in the
* string b that is not 0 or 1, b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int numconv = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			numconv = numconv + 0;
			len--;
		}
		else if (b[i] == '1')
		{
			len--;
			numconv += _pow_recursion(len);
		}
		else
			return (0);
	}
	return (numconv);
}
