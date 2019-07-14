#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: number of things in the command line
 *
 * @argv: array of string values
 *
 * Return: 0 or 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
