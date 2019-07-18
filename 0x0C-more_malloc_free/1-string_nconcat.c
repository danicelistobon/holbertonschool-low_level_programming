#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: pointer
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* *string_nconcat - concatenates two strings
*
* @s1: string 1 given
*
* @s2: string 2 given
*
* @n: number of bytes given
*
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, strl;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	strl = _strlen(s1);

	p = malloc(sizeof(char) * (strl + n + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];

		for (j = 0; j < n; j++)
			p[i + j] = s2[j];
	}
	p[i + j] = '\0';

	return (p);
}
