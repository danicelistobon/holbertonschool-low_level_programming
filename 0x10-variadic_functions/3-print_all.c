#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints anything
*
* @format: types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list argl;
	int i = 0;
	char *str, *separator = "";

	va_start(argl, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(argl, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argl, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argl, double));
				break;
			case 's':
				str = va_arg(argl, char*);
				if (str != NULL)
				{
					printf("%s%s", separator, str);
					break;
				}
				printf("(nil)");
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(argl);
}
