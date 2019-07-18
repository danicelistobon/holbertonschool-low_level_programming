#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *malloc_checked - allocates memory using malloc
*
* @b: unsigned int given
*
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
