#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: number
 *
 */
void print_to_98(int n)
{
int num;

if (n < 98)
{
	for (num = n; num <= 98; num++)
	{
		printf("%d", num);
		if (num != 98)
		{
			printf(", ");
		}
	}
}
else if (n > 98)
{
	for (num = n; num >= 98; num--)
	{
		printf("%d", num);
		if (num != 98)
		{
			printf(", ");
		}
	}
}
else
{
	num = 98;
	printf("%d", num);
}
printf("\n");
}
