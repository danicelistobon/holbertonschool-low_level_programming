#include "holberton.h"
/**
 * *rot13 - encodes a string using rot13
 *
 * @p: pointer
 *
 * Return: string
 */
char *rot13(char *p)
{
	int c, d;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; *(p + c) != '\0'; c++)
	{
		for (d = 0 ; d < 52; d++)
		{
			if (*(p + c) == *(s1 + d))
			{
				*(p + c) = *(s2 + d);
				break;
			}
		}
	}

	return (p);
}
