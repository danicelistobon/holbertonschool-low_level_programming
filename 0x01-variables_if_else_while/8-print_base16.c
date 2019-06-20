#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints all the numbers of base 16 in lowercase
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
