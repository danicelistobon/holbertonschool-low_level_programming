#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2;
int num3;
for (num1 = '0'; num1 <= '7'; num1++)
{
for (num2 = '0'; num2 <= '8'; num2++)
{
for (num3 = '0'; num3 <= '9'; num3++)
{
if (num1 == num2 || num1 == num3 || num2 == num3 || num1 > num2
|| num1 > num3 || num2 > num3)
{
continue;
}
else
{
putchar (num1);
putchar (num2);
putchar (num3);
}
if (num1 == '7' && num2 == '8' && num3 == '9')
{
}
else
{
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
