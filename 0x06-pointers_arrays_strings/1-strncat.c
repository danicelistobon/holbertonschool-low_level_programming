#include "holberton.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: number of bytes
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = 0;
	d = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}
	while (d < n)
	{
		if (*(src + d) == '\0')
		{
			break;
		}
		*(dest + c) = *(src + d);
		c++;
		d++;
	}

	return (dest);
}
