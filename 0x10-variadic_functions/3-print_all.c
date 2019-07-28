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
	char *str, *separator = ", ";

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
				printf("%c", va_arg(argl, int));
				break;
			case 'i':
				printf("%d", va_arg(argl, int));
				break;
			case 'f':
				printf("%f", va_arg(argl, double));
				break;
			case 's':
				str = va_arg(argl, char*);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[i + 1] != '\0')
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(argl);
}
