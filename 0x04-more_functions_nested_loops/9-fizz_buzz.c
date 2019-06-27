#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
	if ((num % 15) == 0)
	{
		printf("FizzBuzz");
		printf(" ");
	}
	else if ((num % 3) == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else if ((num % 5) == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	else
	{
		if (num == 100)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
}
printf("\n");
return (0);
}
