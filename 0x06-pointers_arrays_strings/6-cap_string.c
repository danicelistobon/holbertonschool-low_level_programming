#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string
 *
 * @cs: pointer
 *
 * Return: string
 */
char *cap_string(char *cs)
{
	int c, k;

	c = 0;

	while (*(cs + c) != '\0')
	{
		if (*(cs + c) == ' ' || *(cs + c) == '\t' || *(cs + c) == '\n'
		|| *(cs + c) == ',' || *(cs + c) == ';' || *(cs + c) == '.'
		|| *(cs + c) == '!' || *(cs + c) == '?' || *(cs + c) == '"'
		|| *(cs + c) == '(' || *(cs + c) == ')' || *(cs + c) == '{'
		|| *(cs + c) == '}')
		{
			k = 1;
		}
		else if ((*(cs + c) >= 97 && *(cs + c) <= 122 && k == 1)
		|| (*(cs + 0) >= 97 && *(cs + 0) <= 122))
		{
			*(cs + c) -= 32;
			k = 0;
		}
		else
		{
			k = 0;
		}
		c++;
	}
	return (cs);
}
