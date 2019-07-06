#include "holberton.h"
/**
 * *leet - encodes a string into 1337
 *
 * @p: pointer
 *
 * Return: string
 */
char *leet(char *p)
{
	int c, d;

	char s1[] = {'A', 'E', 'O', 'T', 'L'};
	char s2[] = {'a', 'e', 'o', 't', 'l'};
	char s3[] = {'4', '3', '0', '7', '1'};

	for (c = 0; *(p + c) != '\0'; c++)
	{
		for (d = 0 ; d <= 4; d++)
		{
			if (*(p + c) == *(s1 + d) || *(p + c) == *(s2 + d))
			{
				*(p + c) = *(s3 + d);
			}
		}
	}

	return (p);
}
