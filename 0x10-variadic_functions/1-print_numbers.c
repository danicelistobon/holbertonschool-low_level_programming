#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - prints numbers
*
* @separator: string to be printed between numbers
*
* @n: number of arguments given
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argl;
	unsigned int i;

	va_start(argl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argl, int));

		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(argl);
}
