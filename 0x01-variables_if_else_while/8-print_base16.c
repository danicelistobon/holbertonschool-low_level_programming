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
int num;
char abc;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (abc = 'a'; abc <= 'f'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
