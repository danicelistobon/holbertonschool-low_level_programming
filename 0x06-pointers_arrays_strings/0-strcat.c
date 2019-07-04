#include "holberton.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int c, d;
	 c = 0;
	d = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}
	while (*(src + d) != '\0')
	{
		*(dest + c) = *(src + d);
		c++;
		d++;
	}
	*(src + d) = '\0';

	return (dest);
}
