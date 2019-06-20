#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints the alphabet in lowercase
 * and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for (abc = 'A'; abc <= 'Z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
