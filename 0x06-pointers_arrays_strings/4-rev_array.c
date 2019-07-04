#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer
 *
 * @n: number of elements of the array
 *
 *
 */
void reverse_array(int *a, int n)
{
	int c, d;

	c = 0;
	n--;
	while (c < n)
	{
		d = *(a + n);
		*(a + n) = *(a + c);
		*(a + c) = d;
		c++;
		n--;
	}
}
