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
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
