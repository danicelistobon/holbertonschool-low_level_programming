#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @st: pointer
 *
 * Return: string
 */
char *string_toupper(char *st)
{
	int c;

	c = 0;

	while (*(st + c) != '\0')
	{
		if (*(st + c) >= 97 && *(st + c) <= 122)
		{
			*(st + c) -= 32;
		}
		c++;
	}
	return (st);
}
