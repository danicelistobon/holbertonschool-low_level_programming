#include "holberton.h"
/**
 * main - prints Holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
unsigned int h;
for (h = 0; h < 9; h++)
{
	_putchar(c[h]);
}
_putchar('\n');
return (0);
}
