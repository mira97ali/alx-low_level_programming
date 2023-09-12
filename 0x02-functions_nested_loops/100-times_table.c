#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of rows and columns in the times table.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
			{
				int result = i * j;

				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar('0' + result);
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
			}
		}
		_putchar('\n');
	}
}

