#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints the alphabet in lowercase
 * except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == 'q' || abc == 'e')
{
continue;
}
else
{
putchar(abc);
}
}
putchar('\n');
return (0);
}
