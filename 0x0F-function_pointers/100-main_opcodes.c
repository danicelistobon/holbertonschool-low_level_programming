#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the opcodes of its own main function
*
* @argc: number of things in the command line
*
* @argv: array of string values
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n"),
		exit(2);
	}

	p = (unsigned char *)main;

	for (i = 0; i < (atoi(argv[1])); i++)
	{
		printf("%02x", p[i]);

		if (i < ((atoi(argv[1])) - 1))
			printf(" ");
	}
	printf("\n");

	return (0);
}
