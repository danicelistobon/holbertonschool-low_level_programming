#include "holberton.h"
/**
 * aux_prime - auxiliary function for the prime numbers
 *
 * @a: number 2
 *
 * @n: number given
 *
 * Return: result
 */
int aux_prime(int a, int n)
{
	if (a == n)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (aux_prime(a + 1, n));
	}
}

/**
 * is_prime_number - finds prime numbers
 *
 * @n: number
 *
 * Return: returns 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (aux_prime(2, n));
}
