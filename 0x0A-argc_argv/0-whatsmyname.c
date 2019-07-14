#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 *
 * @argc: number of things in the command line
 *
 * @argv: array of string values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	c = 0;

	while (c < argc)
	{
		printf("%s\n", *(argv + c));
		c++;
	}
	return (0);
}
