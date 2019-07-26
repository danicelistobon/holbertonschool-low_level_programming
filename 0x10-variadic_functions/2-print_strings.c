#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings
*
* @separator: string to be printed between the strings
*
* @n: number of arguments given
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argl;
	unsigned int i;
	char *str;

	va_start(argl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argl, char*);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(argl);
}
