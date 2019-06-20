#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;
for (abc = 'z'; abc >= 'a'; abc--)
{
putchar(abc);
}
putchar('\n');
return (0);
}
