#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: number of things in the command line
 *
 * @argv: array of string values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c, n;

	c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(*(argv + 1));

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	c = c + (n / 25);
	n = n % 25;
	c = c + (n / 10);
	n = n % 10;
	c = c + (n / 5);
	n = n % 5;
	c = c + (n / 2);
	n = n % 2;
	c = c + n;

	printf("%d\n", c);
	return (0);
}
