#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: number of things in the command line
 *
 * @av: array of string values
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *aux, *str;
	int c = 0, d = 0, f = 0, g = 0, count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < ac; c++)
	{
		for (d = 0; *(*(av + c) + d) != '\0'; d++)
		{
			count++;
		}
		count++;
	}
	count += 1;

	aux = malloc(sizeof(char) * count);

	str = aux;

	if (aux == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < ac; f++)
	{
		for (g = 0; *(*(av + f) + g) != '\0'; g++)
		{
			*aux = *(*(av + f) + g);
			aux++;
		}
		*aux = '\n';
		aux++;
	}
	return (str);
}
