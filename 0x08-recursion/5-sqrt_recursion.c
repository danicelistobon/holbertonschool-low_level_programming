#include "holberton.h"
/**
 * aux_sqrt - auxiliary function for the square root
 *
 * @a: number 1
 *
 * @n: number given
 *
 * Return: result
 */
int aux_sqrt(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n)
	{
		return (aux_sqrt(a + 1, n));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: result or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (aux_sqrt(1, n));
}
