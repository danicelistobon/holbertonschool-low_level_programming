#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: no return
 */
void print_alphabet(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
	_putchar(abc);
}
_putchar('\n');
}
