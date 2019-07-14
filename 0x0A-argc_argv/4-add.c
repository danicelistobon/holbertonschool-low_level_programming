#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 *
 * @argc: number of things in the command line
 *
 * @argv: array of string values
 *
 * Return: 0 if no number is passed or 1 if one of the number contains
 * symbols that are not digits
 *
 */
int main(int argc, char *argv[])
{
	int s = 0, c, d;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (c = 1; c < argc; c++)
	{
		for (d = 0; *(*(argv + c) + d) != '\0'; d++)
		{
			if (!isdigit(*(*(argv + c) + d)))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(*(argv + c));
	}
	printf("%d\n", s);
	return (s);
}
