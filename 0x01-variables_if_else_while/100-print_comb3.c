#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2;
for (num1 = '0'; num1 <= '8'; num1++)
{
for (num2 = '0'; num2 <= '9'; num2++)
{
if (num1 == num2 || num1 > num2)
{
continue;
}
else
{
putchar (num1);
putchar (num2);
}
if (num1 == '8' && num2 == '9')
{
}
else
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
