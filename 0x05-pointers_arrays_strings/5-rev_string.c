#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * @s: pointer
 *
 * Return: string
 */
void rev_string(char *s)
{
	int c = 0, r;
	char ch;

	while (*(s + c) != '\0')
	{
		c++;
	}
	c--;
	for (r = 0; r < c; r++)
	{
		ch = *(s + c);
		*(s + c) = *(s + r);
		*(s + r) = ch;
		c--;
	}
}
