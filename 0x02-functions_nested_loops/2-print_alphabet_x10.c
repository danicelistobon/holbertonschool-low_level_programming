#include "holberton.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
char abc;
int n;
for (n = '0'; n <= '9'; n++)
{
	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
_putchar('\n');
}
}
