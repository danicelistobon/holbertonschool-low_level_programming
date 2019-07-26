#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
*
* @n: number of arguments given
*
* Return: result or if n=0 return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list argl;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(argl, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argl, int);
	}
	va_end(argl);

	return (sum);
}
