#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int n1, n2, r1, r2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if ((n2 * n1) > 9)
			{
				r1 = (n1 * n2) / 10;
				r2 = (n1 * n2) % 10;
				_putchar(r1 + '0');
				_putchar(r2 + '0');
			}
			else
			{
				_putchar((n1 * n2) + '0');
			}
			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((n2 + 1) * n1 < 10)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
