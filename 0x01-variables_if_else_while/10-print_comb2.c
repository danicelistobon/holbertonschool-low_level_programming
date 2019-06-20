#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2;
for (num1 = '0'; num1 <= '9'; num1++)
{
for (num2 = '0'; num2 <= '9'; num2++)
{
putchar(num1);
putchar(num2);
if (num1 == '9' && num2 == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
