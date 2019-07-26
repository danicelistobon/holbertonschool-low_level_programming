#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - check the code
*
* @argc: number of things in the command line
*
* @argv: array of string values
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if (((*(argv[2]) == '/') || (*(argv[2]) == '%')) && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(i, j));

	return (0);
}
